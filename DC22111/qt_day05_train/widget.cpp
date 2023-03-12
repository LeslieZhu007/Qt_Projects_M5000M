#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    recognizer = LBPHFaceRecognizer::create(); //创建空的识别器
    c.load("G:/software/EmbedSys/opencv/heads/haarcascade_frontalface_alt.xml");
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_model_training_clicked()
{
    char buf[128];
    Mat face;
    vector<Mat> faces;
    vector<int> labels;
    for (int i = 1;i <= 3 ; i++ ) {
        sprintf(buf,"G:/software/EmbedSys/opencv/heads/%d.pgm",i);
        face = imread(buf);
        cvtColor(face,face,CV_BGR2GRAY);

        faces.push_back(face);//将图片数据插入到数组中保存
        labels.push_back(i); //与图片相对应的标签
        //1.pgm---->1
        //2.pgm---->2
    }
    recognizer->update(faces,labels);
    recognizer->save("G:/software/EmbedSys/opencv/heads/satoshi_nakamoto.xml"); //保存模型
    QMessageBox::information(this,"training","training succeed");

}


void Widget::on_machine_predict_clicked()
{
    char buf[128];
    int labels;
    double confidence;
    vector<Rect> faces;
    Mat src = imread("G:/software/EmbedSys/opencv/heads/person1.jpg"); //要预测的图片
    Mat gray;
    cvtColor(src,gray,CV_BGR2GRAY);
    c.detectMultiScale(gray,faces,2,3,0,Size(24,24));//人脸识别
    for (uint i = 0;i<faces.size() ;i++ ) {
        Mat face = gray(faces[i]); //将源图片识别到的人脸存放到face中
        recognizer->predict(face,labels,confidence); //机器预测
        cout<<"label:"<<labels<<"\t"<<"confidence:"<<confidence<<endl;
        if (labels != -1) {
            rectangle(src,faces[i],2,LINE_8,0);
            sprintf(buf,"%d",labels);
        }
        putText(src,buf,faces[i].tl(),FONT_ITALIC,1.0f,Scalar(255,0,0));//在图片上显示标识
        //参数1: 输入图片
        //参数2: 显示的字符串
        //参数3: 显示到图片的左上角
        //参数4: 字符串的字体
        //参数5: 字体大小
        //参数6: 字体颜色
    }

}

