#include <QApplication>
#include "calc.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Calc *calc = new Calc();

    calc->show();

    return a.exec();
}
