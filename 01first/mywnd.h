//防止头文件重复包含的宏
#ifndef MYWND_H
#define MYWND_H

#include <QWidget>
#include <QPushButton>
#include <QRect>

namespace Ui {
//ui_xxxxx.h 中的类
//是 uic.exe 根据mywmd.ui 自动生成的
//在影子目录中
class MyWnd;//类的前向声明
}

//是自定义的类，继承自 QWidget类
class MyWnd : public QWidget
{
    Q_OBJECT
    //宏  调用moc工具
    //将QT中的信号和槽转换成标准C++语法

public:
    //自定义类的构造函数的声明
    explicit MyWnd(QWidget *parent = nullptr);//默认参数：NULL 指针
    //自定义类的析构函数的声明
    ~MyWnd();

private:
    Ui::MyWnd *ui;//界面的对象
    QPushButton *my_btn;//自定义的按钮
};

#endif // MYWND_H
