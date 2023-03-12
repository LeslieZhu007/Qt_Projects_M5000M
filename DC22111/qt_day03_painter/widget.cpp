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

void Widget::paintEvent(QPaintEvent *event)
{
     QPainter painter(this); //设置画家
     painter.setPen(Qt::black); //设置画笔并上色
     painter.setFont(QFont("Times",12)); //设置字体
     painter.drawText(this->rect(),Qt::AlignCenter,tr("Qt\nproject")); //绘制文本
     QPen pen;
     pen.setStyle(Qt::DashDotDotLine);  //设置画笔 的线条类型
     pen.setColor(QColor(255,0,0)); //设置画笔颜料的颜色
     pen.setWidth(5);
     painter.setPen(pen); //把画笔交给画家
     painter.drawRect(20,20,this->width()-40,this->height()-40);
     cout<<"paint event..........."<<endl;

}

