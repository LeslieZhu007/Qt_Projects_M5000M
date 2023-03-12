#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    v.open(0); //打开摄像头
    c.load("G:\\software\\EmbedSys\\opencv\\heads\\haarcascade_frontalface_alt.xml");
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_open_camera_clicked()
{
      timer_ID = startTimer(30); //30ms刷新一次  打开定时器
      ui->open_camera->setEnabled(false); //打开摄像头   设置按钮不可用
      ui->label->show();
}


void Widget::on_close_camera_clicked()
{
    killTimer(timer_ID);
    ui->open_camera->setEnabled(true);
    ui->label->close();
}

void Widget::timerEvent(QTimerEvent *event)
{
    Mat src;
    Mat rgb;
    Mat gray;
    vector<Rect> faces;
    if (v.read(src)) {  //将读取到的视频存放到图片src对象中
        flip(src,src,1); //镜像源图片
        //opencv bgr ==> qt rgb
        rgb = Mat::zeros(src.size(),src.type()); //创建图片，与src大小意义
        cvtColor(src,rgb,CV_BGR2RGB);
        cvtColor(rgb,gray,CV_BGR2RGB);  //灰度转换
        c.detectMultiScale(gray,faces,1.1,3,0,Size(24,24)); //人脸识别
        for(uint i = 0;i < faces.size();i++)
        {
            rectangle(rgb,faces[i],Scalar(0,0,255),1,LINE_8,0); //绘制矩形框
        }
        cv::resize(rgb,rgb,Size(400,300));//更改图片大小
        ui->label->resize(QSize(400,300)); //更改标签的大小
        //QImage(const uchar *data, int width, int height, Format format, QImageCleanupFunction cleanupFunction = nullptr, void *cleanupInfo = nullptr);
        QImage image(rgb.data,rgb.cols,rgb.rows,rgb.cols*rgb.channels(),QImage::Format_RGB888);
        ui->label->setPixmap(QPixmap::fromImage(image));

    }
}

