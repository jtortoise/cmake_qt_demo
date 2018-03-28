#include "QApplication"
#include "forms/MainWindow.h"
#include "module1/MocClass.h"

int main(int argc, char **argv)
{
    QApplication a(argc, argv);
    MainWindow w;

    MocClass mc(&w);
    QObject::connect(&mc, SIGNAL(mysignal(QString)), &w, SLOT(showInfo(QString)));

    w.show();
    return a.exec();
}