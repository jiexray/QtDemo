#include "notepad.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    // feature2
    // feature1
    // feature3

    // new pull from local 2017/1/24
    QApplication a(argc, argv);
    Notepad w;
    w.show();

    return a.exec();
}
