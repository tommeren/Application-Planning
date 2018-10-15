#include "connection.h"

#include <QtSql>
#include <QDebug>

Connection::Connection()
{

}

Connection::~Connection()
{

}

void Connection::db_connection()
{
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setPort(3306);
    db.setUserName("root");
    db.setPassword("test123");
    db.setDatabaseName("db_application");


    if(db.open())
    {
        qDebug() << "Connected!";
    }

    else
    {
        QSqlError error = db.lastError();
        qDebug() << "Database error: " << error.databaseText();
        qDebug() << "Driver error: " << error.driverText();
        qDebug() << "Connection failed...";
    }

    db.close();




}
