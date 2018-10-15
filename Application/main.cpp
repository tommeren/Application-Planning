#include "application.h"
#include "loginwindow.h"
#include "initialisation.h"

#include <QApplication>




int main(int argc, char *argv[])
{
    qputenv("QT_SCALE_FACTOR", "1");
    QApplication a(argc, argv);


    Initialisation init;
    init.init_Program();




    return a.exec();
}
