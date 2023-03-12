#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    Widget w;
//    w.show();

    Mat src; //使用图片类定义用于存储图片的对象
    src = imread("G:\\software\\EmbedSys\\opencv\\heads\\age.jpg"); //读取图片到src中
    namedWindow("leslie",CV_WINDOW_AUTOSIZE); //新建一个窗口
    //参数1：窗口的名称
    //参数2：设置图片为自适应大小
    imshow("leslie",src); //显示图片
    //参数1：要显示的窗口名称
    //参数2: 需要显示的窗口的图片

    //Ptr<FaceRecognizer> recognizer  = LBPHFaceRecognizer::create();
    Ptr<FaceRecognizer> recognizer = FaceRecognizer::load<LBPHFaceRecognizer>("xxxx.xml");

    /**************视频类*******************/
//    VideoCapture v;
//    bool ret = v.open("G:\\software\\EmbedSys\\opencv\\heads\\redditsave_com_one_of_the_russian_cruises_missiles_shot_down_jcym6qf8iiu91.mp4");
//    if (ret) {
//        qDebug()<<"open video success"<<endl;
//    } else
//    {
//        qDebug()<<"open video failure"<<endl;
//    }
//    //视频是连续的图片
//    Mat src1;//定义一个图片对象
//    while (v.read(src1)) //将视频的图片帧读取存放到图片对象中
//    {
//        imshow("d",src1);
//        int res = waitKey(20); //延时 10ms
//        if(res == 27)
//        {
//            break; //按下esc键停止播放
//        }
//    }

    /**********灰度转换*************/
//    Mat gray;
//    //灰度处理图片
//    cvtColor(src,gray,CV_BGR2GRAY);
//     imshow("leslie",gray);


     /********灰度处理视频************/
//     Mat gray1;
//     Mat src2;
//     VideoCapture v1;
//     bool ret = v1.open("G:\\software\\EmbedSys\\opencv\\heads\\redditsave_com_one_of_the_russian_cruises_missiles_shot_down_jcym6qf8iiu91.mp4");
//     if (ret) {
//         qDebug()<<"open video success"<<endl;
//     } else
//     {
//         qDebug()<<"open video failure"<<endl;
//     }
//     while (1) {
//         v1>>src2;
//         cvtColor(src2,gray1,CV_BGR2GRAY);

//         imshow("Video Play Interface",gray1);
//         int res = waitKey(10); //延时 10ms
//         if(res == 27)
//         {
//             break; //按下esc键停止播放
//         }
//     }

//    CascadeClassifier c;
//    bool res = c.load("G:/software/EmbedSys/opencv/heads/haarcascade_frontalface_alt.xml");
//     if (res) {
//        qDebug()<<"configure file success";
//     } else
//     {
//         qDebug()<<"configure file failed";
//     }
//    vector<Rect> faces;
//    Mat gray1;

     /******打开摄像头***********/
//     VideoCapture v0;     // VideoCapture v0(0) 用构造函数打开摄像头
//     if (v0.open(0)) {
//         qDebug()<<"camera open success";
//     } else
//     {
//          qDebug()<<"camera open failure";
//     }

//     Mat src3;
//     while (1) {
//         v0>>src3;
//         flip(src3,src3,1); //镜像图片
//         //灰度处理摄像头
//          cvtColor(src3,gray1,CV_BGR2GRAY);
//          c.detectMultiScale(gray1,faces,1.1,3,0,Size(24,24));
//          for (unsigned int i = 0; i < faces.size();i++ ) {
//              rectangle(src3,faces[i],Scalar(0,0,255),2,LINE_8,0); //在识别到的人脸上绘制矩形框
//          }
//         imshow("Camera Interface",src3);
//         int res = waitKey(10); //延时 10ms
//         if(res == 27)
//         {
//             break; //按下esc键停止播放
//         }

//     }
    return a.exec();
}
