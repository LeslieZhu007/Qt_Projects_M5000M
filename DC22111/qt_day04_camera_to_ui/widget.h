#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <opencv2/opencv.hpp>
#include <iostream>
#include <math.h>
#include <opencv2/face.hpp>
#include <vector>
#include <map>
#include <QMessageBox>
#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <QDateTime>
#include <QTimerEvent>
#include <QtSerialPort/QtSerialPort>
#include <QtSerialPort/QSerialPortInfo>
using namespace  cv;
using namespace cv::face;
using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_open_camera_clicked();

    void on_close_camera_clicked();

private:
    Ui::Widget *ui;
   void  timerEvent(QTimerEvent *event) override; //定时器处理函数声明
   int timer_ID;
   VideoCapture v;  //定义视频处理对象
   CascadeClassifier c;
};
#endif // WIDGET_H
