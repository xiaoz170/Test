#include "widget.h"
#include <QApplication>
#include <QDebug>
#include <QDialog>
#include <QTextEdit>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget *win = new Widget();

    win->show();
    
    return a.exec();
}
