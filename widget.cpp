#include "widget.h"
#include <QPainter>
#include <QTextEdit>
#include <QCursor>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QTextEdit *textEdit = new QTextEdit();
    QCursor cursor  = textEdit->cursor();
    textEdit->set
}

Widget::~Widget()
{
}

void Widget::paintEvent(QPaintEvent *event)
{
    QPainter paint( this );
    paint.setPen( Qt::blue );
    paint.drawText( rect(), Qt::AlignCenter, "The Text" );
}




