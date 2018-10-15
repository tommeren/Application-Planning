#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "connection.h"
#include "application.h"
#include "initialisation.h"

#include <QDebug>
#include <QtSql>
#include <QSqlDatabase>
#include <QDialog>

loginWindow::loginWindow(QWidget *parent) : QDialog(parent), ui(new Ui::loginWindow)
{
    ui->setupUi(this);
    Connection conn;
    conn.db_connection();

}

loginWindow::~loginWindow()
{
    delete ui;
}


void loginWindow::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    QSqlDatabase conn = QSqlDatabase::database();

    if(conn.open())
    {
        QSqlQuery login;
        login.prepare("SELECT strGebruikersnaam, strWachtwoord FROM tblregistration WHERE strGebruikersnaam = ?");
        login.addBindValue(username);
        login.exec();


        if(login.next()) {
            QString user = login.value("strGebruikersnaam").toString();
            QString pass = login.value("strWachtwoord").toString();
            if(username == user && password == pass)
            {
                qDebug() << "Logged in!";



            }
            else
            {
                qDebug() << "Password is incorrect.";
            }
        }
        else
        {
            qDebug() << "Username and/or password is incorrect.";

        }
    }
}
