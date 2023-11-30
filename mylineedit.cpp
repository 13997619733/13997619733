#include "mylineedit.h"
#include <QKeyEvent>
#include <QDebug>
MyLineEdit::MyLineEdit(QWidget *parent):
    QLineEdit(parent)

{

}

void MyLineEdit::keyPressEvent(QKeyEvent *event)
{
    qDebug()<<"MyLineEdit键盘事件";
    QLineEdit::keyPressEvent(event);
    event->ignore();
}
