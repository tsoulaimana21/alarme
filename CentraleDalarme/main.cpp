#include "clavier.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    clavier w;
    w.show();
    return a.exec();
}
