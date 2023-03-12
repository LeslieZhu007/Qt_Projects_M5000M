#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    Widget w;
//    w.show();

    CascadeClassifier c;
    vector<Rect> face;
    bool ret = c.load("G:\\software\\EmbedSys\\opencv\\heads\\haarcascade_frontalface_alt.xml");
    if (ret) {
       qDebug()<<"configure file success";
    } else
    {
        qDebug()<<"configure file failed";
    }
    Mat gray;
    Mat src = imread("G:\\software\\EmbedSys\\opencv\\heads\\age.jpg");

    cvtColor(src,gray,CV_BGR2GRAY);//灰度处理，目的是减少人脸失败处理的数据量
     equalizeHist(gray,gray);
    c.detectMultiScale(gray,face,1.1,3,0,Size(24,24)); //人脸失败，将识别到的人脸存放到face中

    //在人脸上绘制矩形框
    rectangle(src,face.at(0),Scalar(255,0,0),2,LINE_4,0);

    imshow("Face Recognition",src); //显示图片
    return a.exec();
}
