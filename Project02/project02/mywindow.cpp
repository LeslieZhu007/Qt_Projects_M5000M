#include "mywindow.h"
#include "ui_mywindow.h"

MyWindow::MyWindow(QWidget *parent)
    : QWidget(parent) //调用父类构造函数并传参
    , ui(new Ui::MyWindow)//给界面对象ui分配空间
{
    //初始化界面上的组件--setupUi函数在ui_mywindow.h中
    ui->setupUi(this);
}

//自定义类的析构函数
MyWindow::~MyWindow()
{
    delete ui;
}

