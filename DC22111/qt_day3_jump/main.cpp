#include "widget.h"
#include "form.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    Form f;
    //点击主界面的按钮，主界面会发射jump_signals信号
    //同时隐藏主界面，次界面s接收到执行槽函数
    QObject::connect(&w,&Widget::emit_jump_signals,&f,&Form::on_show_slots);

    QObject::connect(&f,&Form::emit_form_jump_signals,&w,&Widget::on_show_slots);

    return a.exec();
}
