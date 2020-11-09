#include "QtOpenCV_HSV_VS.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtOpenCV_HSV_VS w;
    w.show();
    w.Start();
    return a.exec();
}
