#include "mywnd.h"//自定义类的头文件
#include <QApplication>

int main(int argc, char *argv[])
{
    //a 是后台事件管理器的对象
    QApplication a(argc, argv);
    MyWnd w;//w 是自定义类的对象
            //实例化的过程会调用构造函数  在 MyWnd.cpp 中
    w.show();//展示窗口，show函数是继承过来的

    return a.exec();//轮询等待事件发生
}

//后台事件处理 伪代码
/*
while(1){
    轮询等待事件发生
    一旦有事件发生，就回调对应的事件处理函数来处理时间
        处理方式
            1.信号槽机制
            2.重写事件函数
    if(关闭){
        退出阻塞结束程序
    }
}
*/
