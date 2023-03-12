#include "mainwindow.h"
//包含自定义类的头文件
//引入工程中的头文件
#include <QApplication>
//包含应用程序的头文件

int main(int argc, char *argv[])
{
    QApplication a(argc, argv); //定义并创建了应用程序
    MainWindow w;  //在栈区给自定义的类创建窗口
    w.show(); //显示窗口
    return a.exec(); //应用程序输出，开始应用程序的消息循环和事件处理
}
