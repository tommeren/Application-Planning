#include "initialisation.h"
#include "application.h"
#include "loginwindow.h"

Initialisation::Initialisation()
{

}

void Initialisation::init_Program()
{
    loginWindow login;
    login.exec();
}

void Initialisation::app_Program()
{
    Application app;
    app.show();
}
