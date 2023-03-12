#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    Widget w;
//    w.show();
         Mat gray1;
         Mat src2;
         VideoCapture v1;
         CascadeClassifier c;

        bool res = c.load("G:/software/EmbedSys/opencv/heads/haarcascade_frontalface_alt.xml");
         if (res) {
            qDebug()<<"configure file success";
         } else
         {
             qDebug()<<"configure file failed";
         }
         vector<Rect> faces_cascade = {};
         bool ret = v1.open("G:/software/EmbedSys/opencv/heads/01.mp4");
         if (ret) {
             qDebug()<<"open video success"<<endl;
         } else
         {
             qDebug()<<"open video failure"<<endl;
         }
         while (1) {
             cout<<"enter while"<<endl;
             v1>>src2;
             flip(src2,src2,1);
             cvtColor(src2,gray1,CV_BGR2GRAY);
             cout<<"enter cvtColor"<<endl;

             //c.detectMultiScale(gray1,faces_cascade,1.1,3,0,Size(24,24));
             c.detectMultiScale(gray1,faces_cascade);
             cout<<"enter detectMultiScale"<<endl;
             for (uint i = 0; i < faces_cascade.size();i++ ) {
                 rectangle(src2,faces_cascade[i],Scalar(0,0,255),2,LINE_8,0); //在识别到的人脸上绘制矩形框
                 cout<<"enter rectangle"<<endl;
             }

             imshow("Video Play Interface",src2);
             int res = waitKey(10); //延时 10ms
             if(res == 27)
             {
                 break; //按下esc键停止播放
             }
         }


    return a.exec();
}
