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


void Widget::on_pushButton_clicked()
{
    emit emit_jump_signals();//手动发送自定义信号
    this->hide(); //同时隐藏主界面
}

void Widget::on_show_slots()
{
    this->show();
}

