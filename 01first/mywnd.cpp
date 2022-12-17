#include "mywnd.h"
#include "ui_mywnd.h"

//自己类的构造函数的定义
MyWnd::MyWnd(QWidget *parent) :
    QWidget(parent),//调用父类的构造函数，并传参
    ui(new Ui::MyWnd),//给界面类对象 ui 分配空间
    my_btn(new QPushButton(this))//为自己按钮分配空间,this代表当前窗口
{
    //初始化界面上的组件--setupUi函数在 ui_mywnd.h 中
    ui->setupUi(this);
    //为自定的按钮设置属性
    my_btn->setGeometry(QRect(20, 40, 171, 51));
    my_btn->setText("Yamamoto Isoroku");
}

//自定义类的析构函数
MyWnd::~MyWnd()
{
    delete ui;
}
