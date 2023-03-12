#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include<QIcon>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //设置窗口标题
    this->setWindowTitle("first title");
    //获取窗口标题
    QString string = windowTitle();
    qDebug()<<string; //相当于cout
   this->setWindowIcon(QIcon("D:/Projects/QtProjects/DC22111/qt_day01_1_first_window/01.jpg"));
   //this->setMaximumSize(400,300);
   this->setMaximumSize(QSize(1024,965));


   //设置窗口的最小尺寸
   this->setMinimumSize(70,45);

   //设置窗口固定尺寸
   this->setFixedSize(500,500);

    //设置窗口透明度
    this->setWindowOpacity(1);
}



Widget::~Widget()
{
    delete ui;
}

