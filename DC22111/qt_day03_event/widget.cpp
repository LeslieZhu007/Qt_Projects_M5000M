#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::keyPressEvent(QKeyEvent *event)
{
    QString string = event->text(); //获取键盘的字母值
    int key = event->key(); //得到键盘字符对应的数值
    QString msg = string+" is press,this num is " + QString::number(key); //将数字转化为一个字符串类型
    ui->key_press->setText(msg);
}

void Widget::keyReleaseEvent(QKeyEvent *event)
{
    QString string = event->text(); //获取键盘的字母值
    int key = event->key(); //得到键盘字符对应的数值
    QString msg = string+" is released,this num is " + QString::number(key); //将数字转化为一个字符串类型
    ui->key_release->setText(msg);
}

void Widget::mouseMoveEvent(QMouseEvent *event)
{
    QPoint pos = event->pos();
    QString msg = QString("position:%1,%2").arg(pos.x()).arg(pos.y());
    ui->mouse_move->setText(msg); //此处ui界面的key_press是label标签更改后的标签的名字

}

void Widget::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {  //判断鼠标左键是否按下
           ui->mouse_cliecked->setText("left is pressed");
    } else  if (event->button() == Qt::RightButton)
    {
        ui->mouse_cliecked->setText("right is pressed");
    } else if (event->button() == Qt::MiddleButton)
    {
        ui->mouse_cliecked->setText("middle is pressed");
    }
}

void Widget::mouseReleaseEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {  //判断鼠标左键是否按下
           ui->mouse_released->setText("left is released");
    } else  if (event->button() == Qt::RightButton)
    {
        ui->mouse_released->setText("right is released");
    } else if (event->button() == Qt::MiddleButton)
    {
        ui->mouse_released->setText("middle is released");
    }
}

void Widget::mouseDoubleClickEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {  //判断鼠标左键是否按下
           ui->mouse_double_clicked->setText("left is double clicked");
    } else  if (event->button() == Qt::RightButton)
    {
        ui->mouse_double_clicked->setText("right is double clicked");
    } else if (event->button() == Qt::MiddleButton)
    {
        ui->mouse_double_clicked->setText("middle is double clicked");
    }
}

