//#include "mainwindow.h"
#include "login.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //Login w;
    //w.show();
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Moje pliki/spizarka.db");

    // Otwarcie połączenia w main.cpp
    if (!db.open()) {
        qDebug() << "Nie udało się połączyć z bazą danych SQLite.";
        return -1;
    }

    // Przekazanie połączenia do `Login`
    Login loginWindow(db);
    loginWindow.show();
    return a.exec();
}
