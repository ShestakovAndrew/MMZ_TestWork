#include "MMZ_TestWork.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MMZ_TestWork w;
    w.show();
    return a.exec();
}
