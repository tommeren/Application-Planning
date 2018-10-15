#include "application.h"
#include "ui_application.h"

#include "connection.h"
#include "loginwindow.h"

Application::Application(QWidget *parent) : QMainWindow(parent), ui(new Ui::Application)
{
    ui->setupUi(this);



}

Application::~Application()
{
    delete ui;
}

