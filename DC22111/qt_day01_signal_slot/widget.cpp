#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QPushButton *btn1 = new QPushButton(this);//指定定义按钮并指定父组件
    //connect(sender,SIGNAL(signal()),recever,SLOT(slot()));
    connect(btn1,SIGNAL(clicked()),this,SLOT(on_clicked_slots()));
    //信号与槽在Qt的4版本的连接函数中不需要指定信号和槽所属的类，且需要在信号
    //函数与槽函数后面加括号
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_clicked_slots()
{
    cout<<"click hello world"<<endl;
}

void Widget::on_pushButton_clicked()
{
    cout<<"pushButton hello world"<<endl;
}

