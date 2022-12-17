#include "mywindow.h" //自定义类头文件

#include <QApplication>

int main(int argc, char *argv[])
{
    //a 是后台事件管理器对象
    QApplication a(argc, argv);
    //w是自定义类的对象
    MyWindow w;
    //展示窗口，show函数是继承过来的
    w.show();
    //阻塞等待事件发生
    return a.exec();
}

/*
 * a.exec()
 *
 * 后台事件处理伪代码
 * while(1)
 * 阻塞等待事件发生
 * 一旦有事件发生，就回调对应的事件处理函数
 * 处理方式
 *              1.信号槽机制
 *              2.重写事件函数
 *              if(关闭)
 *              {
 *                  退出阻塞结束程序
 *              }
 */
