#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //连接
    //创建按钮
    QPushButton *btn = new QPushButton("Leslie Button",this);
    connect(btn,&QPushButton::clicked,this,&Widget::on_clicked_slots);

    connect(this,&Widget::on_hello_signals,this,&Widget::on_hello_slots);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_clicked_slots()
{
    cout<<"button click signal emits new signal......."<<endl;
    emit on_hello_signals();  //按钮关联自定义信号
}

void Widget::on_hello_slots()
{
    cout<<"self-defined signals...."<<endl;
}
