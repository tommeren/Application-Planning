/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_loginWindow
{
public:
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;
    QPushButton *pushButton_login;
    QPushButton *pushButton_register;
    QLabel *label_username;
    QLabel *label_password;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *loginWindow)
    {
        if (loginWindow->objectName().isEmpty())
            loginWindow->setObjectName(QStringLiteral("loginWindow"));
        loginWindow->resize(500, 250);
        lineEdit_username = new QLineEdit(loginWindow);
        lineEdit_username->setObjectName(QStringLiteral("lineEdit_username"));
        lineEdit_username->setGeometry(QRect(150, 100, 200, 20));
        lineEdit_password = new QLineEdit(loginWindow);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(150, 140, 200, 20));
        lineEdit_password->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        lineEdit_password->setEchoMode(QLineEdit::Password);
        pushButton_login = new QPushButton(loginWindow);
        pushButton_login->setObjectName(QStringLiteral("pushButton_login"));
        pushButton_login->setGeometry(QRect(250, 180, 100, 23));
        pushButton_register = new QPushButton(loginWindow);
        pushButton_register->setObjectName(QStringLiteral("pushButton_register"));
        pushButton_register->setGeometry(QRect(150, 180, 75, 23));
        label_username = new QLabel(loginWindow);
        label_username->setObjectName(QStringLiteral("label_username"));
        label_username->setGeometry(QRect(150, 80, 100, 20));
        label_password = new QLabel(loginWindow);
        label_password->setObjectName(QStringLiteral("label_password"));
        label_password->setGeometry(QRect(150, 120, 100, 20));
        textBrowser = new QTextBrowser(loginWindow);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(380, 30, 101, 81));

        retranslateUi(loginWindow);

        QMetaObject::connectSlotsByName(loginWindow);
    } // setupUi

    void retranslateUi(QDialog *loginWindow)
    {
        loginWindow->setWindowTitle(QApplication::translate("loginWindow", "Account", nullptr));
        lineEdit_password->setInputMask(QString());
        lineEdit_password->setText(QString());
        pushButton_login->setText(QApplication::translate("loginWindow", "Log in", nullptr));
        pushButton_register->setText(QApplication::translate("loginWindow", "Register", nullptr));
        label_username->setText(QApplication::translate("loginWindow", "Gebruikersnaam", nullptr));
        label_password->setText(QApplication::translate("loginWindow", "Wachtwoord", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginWindow: public Ui_loginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
