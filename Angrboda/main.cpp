#include "angrboda.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Angrboda w;
    w.show();
    return a.exec();
}
