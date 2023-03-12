#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    pix = new QPixmap(QSize(this->size())); //给画布指定尺寸
    pix->fill(); // 填充画布颜色，默认为白色
}

Widget::~Widget()
{
    delete ui;
}

void Widget::mouseMoveEvent(QMouseEvent *event)
{
       QPainter painter1(pix);  //定义画家在画布上绘画
       QPen pen1;
       pen1.setColor(QColor(1,1,1));  //设置笔的颜料
       painter1.setPen(pen1); //把画笔交给画家
       painter1.drawLine(point,event->pos());//绘画线条
       point = event->pos();
       this->update();//把画布内容同步到widget窗口中
}

void Widget::mousePressEvent(QMouseEvent *event)
{
       point = event->pos(); //得到鼠标此时的位置
}

void Widget::paintEvent(QPaintEvent *event)
{
    QPainter painter2(this); //定义画家
    painter2.drawPixmap(this->rect(),*pix); //将画布内容放到窗口界面中

}

