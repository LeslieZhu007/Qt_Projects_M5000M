#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Mat gray;
    Mat src = imread("G:\\software\\EmbedSys\\opencv\\heads\\age.jpg");


    cvtColor(src,gray,CV_BGR2GRAY);//灰度处理，目的是减少人脸失败处理的数据量
    equalizeHist(gray,gray);
    imshow("c",gray);

    return a.exec();
}
