#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
//自定义类的父类的头文件

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }  //命名空间Ui的声明。包含了MainWindow类
//MainWindow不是本文件自定义的类，而是在ui_mainwindow.h中存在的类
QT_END_NAMESPACE

class MainWindow : public QWidget   //自定义的MainWindow类，继承自QMainwWindow
{
    Q_OBJECT  //对象宏，用于信号与槽

public:
    explicit MainWindow(QWidget *parent = nullptr);    //explict防止隐式类型转换
    //构造函数的内部声明
    ~MainWindow();
    //析构函数

private:
    Ui::MainWindow *ui;
    //定义一个ui指针，用于操作.ui文件里的组件
    //使用声明的Ui的命名空间里的MainWindow类定义的
    //指向可视化设计的界面，要访问页面上的组件都需要
    //通过这个ui指针进行访问
};
#endif // MAINWINDOW_H
