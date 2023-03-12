#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QPushButton *btn1 = new QPushButton("first btn",this);
    connect(btn1,&QPushButton::clicked,this,&Widget::on_clicked_slots);

    connect(this,&Widget::hello_signals,this,&Widget::on_hello_slots);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_clicked_slots()
{
    emit hello_signals(); //手动发射自定义的信号
}

void Widget::on_hello_slots()
{
    cout<<"today is hot"<<endl;
}
