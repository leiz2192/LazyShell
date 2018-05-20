#include "LazyShell.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LazyShell w;
    w.show();
    return a.exec();
}
