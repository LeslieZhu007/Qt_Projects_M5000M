#ifndef MYWINDOW_H
#define MYWINDOW_H

#include <QWidget>

QT_BEGIN_NAMESPACE
//Ui命名空间中的MyWindow和对象MyWindow不同
//ui_mywindow.h中的类
//是uic.exe根据mywindow.ui自动生成的
namespace Ui { class MyWindow; }
QT_END_NAMESPACE

//是自定义的类
class MyWindow : public QWidget
{
    //QT中处理信号和槽
    Q_OBJECT

public:
    //NULL指针  函数默认参数
    MyWindow(QWidget *parent = nullptr);
    ~MyWindow();

private:
    //界面类的对象
    Ui::MyWindow *ui;
};
#endif // MYWINDOW_H
