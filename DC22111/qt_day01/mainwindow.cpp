#include "mainwindow.h"
//Qt编译生成的与ui文件maindwindow.ui对应的类定义文件
#include "ui_mainwindow.h"
//执行父类QWidget的构造函数。创建了UI::MainWindow类的对象ui
//ui在mainwindow.h里有一个MainWindow类，私有成员里定义了ui
MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);   //执行了Ui:MainWindow类的setupUi函数
    //这个类实现窗口的生成与各种属性的设置，信号与槽的关联
}

MainWindow::~MainWindow()
{
    delete ui;
}

