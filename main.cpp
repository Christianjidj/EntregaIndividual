#include "calendarwin.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    calendarWin w;
    w.show();
    return QCoreApplication::exec();
}
