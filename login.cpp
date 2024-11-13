#include "login.h"
#include "ui_login.h"
#include "qaesencryption.h"

Login::Login(QSqlDatabase& db, QWidget *parent) :
    QDialog(parent),
    db(db),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    mw = nullptr;

    //db = new QSqlDatabase(QSqlDatabase::addDatabase("QMYSQL"));
    //db->setHostName("db.zut.edu.pl");
    //db->setUserName("dk50961");
    //db->setPassword("c13ZvaeQ");
    //db->setDatabaseName("dk50961");
    if(db.open()) {
        qDebug() << "Podłączono do bazy danych";
    } else {
        QMessageBox::critical(nullptr, "Baza danych", "Nie udało się połączyć z bazą danych SQLite.", QMessageBox::Ok);
    }
    setWindowTitle("Logowanie");
}
Login::~Login()
{
    if (db.isOpen()) {
        db.close();
    }
    QSqlDatabase::removeDatabase("qt_sql_default_connection");
    delete ui;
    qDebug() << "Baza danych odlaczona";
}

void Login::open_MainWindow()
{
    qDebug() << "Przekazano dane logowania. Próba otwarcia MainWindow";
    mw = nullptr;
    hide();
    qDebug() << "Dwa";
    mw = new MainWindow(login,id,db,this);
    qDebug() << "Trzy";
    mw->show();
    qDebug() << "Cztery";
    mw->resizeRowsInTableView();
    qDebug() << "5";
}

bool Login::check_existing_users(bool checkLoginOnly)
{
    login = ui->lineEditLogin->text();
    QString password = ui->lineEditPassword->text();
    QSqlQuery query(db);
    query.prepare("SELECT * FROM users");
    query.exec();

    QString encryptedLogin;
    QString encryptedPassword;
    while (query.next()) {
        encryptedLogin = query.value(1).toByteArray();
        encryptedPassword = query.value(2).toByteArray();
        decodeText(encryptedLogin,encryptedPassword);
        if(checkLoginOnly && login == encryptedLogin)
            return true;
        else {
            if(login == encryptedLogin && password == encryptedPassword){
                id = query.value(0).toInt();
                return true;
            }
        }
    }
    return false;
}

bool Login::isLineEditEmpty()
{
    if(ui->lineEditLogin->text() == "" || ui->lineEditPassword->text() == "") {
        ui->lineEditLogin->setText("");
        ui->lineEditPassword->setText("");
        return true;
    }
    return false;
}

void Login::encodeText(QString& l, QString& p)
{
    QByteArray hashKey = QCryptographicHash::hash(key.toLocal8Bit(), QCryptographicHash::Sha256);
    QByteArray hashIV = QCryptographicHash::hash(iv.toLocal8Bit(), QCryptographicHash::Md5);
    //QAESEncryption encryption(QAESEncryption::AES_128, QAESEncryption::ECB);
    QAESEncryption encryption(QAESEncryption::AES_256, QAESEncryption::CBC);
    QByteArray encodedLogin = encryption.encode(l.toUtf8(), hashKey, hashIV).toHex();
    QByteArray encodedPassword = encryption.encode(p.toUtf8(), hashKey, hashIV).toHex();
    l = encodedLogin;
    p = encodedPassword;
}

void Login::decodeText(QString &l, QString &p)
{
    QByteArray hashKey = QCryptographicHash::hash(key.toLocal8Bit(), QCryptographicHash::Sha256);
    QByteArray hashIV = QCryptographicHash::hash(iv.toLocal8Bit(), QCryptographicHash::Md5);
    QAESEncryption encryption(QAESEncryption::AES_256, QAESEncryption::CBC);
    QByteArray decodedLogin = encryption.decode(QByteArray::fromHex(l.toUtf8()), hashKey, hashIV);
    QByteArray decodedPassword = encryption.decode(QByteArray::fromHex(p.toUtf8()), hashKey, hashIV);
    l = QString(encryption.removePadding(decodedLogin));
    p = QString(encryption.removePadding(decodedPassword));
}

void Login::on_loginButton_clicked(){
    if(isLineEditEmpty())
        QMessageBox::warning(nullptr, "Warning", "Proszę uzupełnić wszystkie pola" ,QMessageBox::Ok);
    else if(check_existing_users())
        open_MainWindow();
    else {
        ui->lineEditLogin->setText("");
        ui->lineEditPassword->setText("");
        QMessageBox::critical(nullptr, "Error", "Zły login lub hasło.", QMessageBox::Ok);
    }
}

void Login::on_registerButton_clicked()
{
    if(isLineEditEmpty())
        QMessageBox::warning(nullptr, "Warning", "Proszę uzupełnić wszystkie pola" ,QMessageBox::Ok);
    else if(check_existing_users(true))
        QMessageBox::critical(nullptr, "Error", "Taki użytkownik już istnieje", QMessageBox::Ok);
    else {
        QSqlQuery query(db);
        query.prepare("INSERT INTO users (login, password, kcal) VALUES (?, ?, ?)");

        QString login = ui->lineEditLogin->text();
        QString password = ui->lineEditPassword->text();
        encodeText(login, password);

        query.bindValue(0, login);
        query.bindValue(1, password);
        query.bindValue(2, 2000); //srednia ilosc kalorii spozywana przez czlowieka dziennie
        query.exec();
        if (query.exec()) {
            QMessageBox::information(nullptr, "Baza danych", "Rejestracja przebiegła pomyślnie", QMessageBox::Ok);
        } else {
            QMessageBox::critical(nullptr, "Baza danych", "Błąd podczas rejestracji.", QMessageBox::Ok);
        }
    }
}
