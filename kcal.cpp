#include "kcal.h"
#include "ui_kcal.h"

Kcal::Kcal(QSqlDatabase& db, int id, int kcal, QWidget *parent)
    : QDialog(parent),
    db(db),
    id(id),
    ui(new Ui::Kcal)
{
    ui->setupUi(this);
    ui->spinBox->setValue(kcal);
}

Kcal::~Kcal()
{
    delete ui;
}

void Kcal::on_okButton_clicked()
{
    QSqlQuery query(db);
    query.prepare("UPDATE users SET kcal = ? WHERE id = ?");
    query.addBindValue(ui->spinBox->value());
    query.addBindValue(id);
    if (!query.exec()) {
        QMessageBox::critical(this, "Błąd", "Nie udało się zaktualizować kalorii.");
    } else {
        emit newKcal(ui->spinBox->value());
        QMessageBox::information(this, "Sukces", "Zaktualizowano ilość kalorii.");
        this->close();
    }
}

//void Kcal::on_okButton_clicked()
//{
//    QSqlQuery query;
//    query.prepare("UPDATE users SET kcal = ? WHERE id = ?");
//    query.bindValue(0, ui->spinBox->value());
//    query.bindValue(1, id);
//   query.exec();
//    emit newKcal(ui->spinBox->value());
//    close();
//}
