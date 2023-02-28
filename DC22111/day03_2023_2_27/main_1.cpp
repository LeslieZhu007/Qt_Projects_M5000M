#include <iostream>

using namespace std;
class stu
{
    int age;
    string name;
    int *p;
public:
    stu(){}
    //explicit stu(int a,string n) // explicit目的是为了防止隐式类型转换，只对构造函数有用。   stu(int a,string n)
    stu(int a,string n):name(n),age(a)
    {
        p = new int;
        cout<<"stu::constructor"<<"\t"<<"this="<<this<<endl;
    }
    ~stu()
    {
        delete p;
        cout<<"stu::destructor"<<"\t"<<"this="<<this<<endl;
    }
};
class A
{
int a;
public:
A(int a):a(a){}
};

//长方体类
class Cuboid
{
public:
    void calculate_volume()
    {
        cout<<"The volume of the cuboid is "<<length*width*high<<endl;
    }
    /*
    explicit Cuboid(int length,int width,int high) //防止隐式转换
    {
        this->length = length;
        this->width = width;
        this->high = high;
    }
    */

    //使用构造函数初始化列表的方式

    explicit Cuboid(int length,int width,int high,int a):length(length),width(width),high(high),a(a){
        cout<<"constructor";
    }

/*
    explicit Cuboid(int length,int width,int high):length(length),width(width),high(high){
        cout<<"constructor";
    }
*/
    int get_length(){return length;}
    int get_width() {return width;}
    int get_high() {return high;}
private:
    int length;
    const int width;  //const  初始化列表
    int &high;          //引用   初始化列表
    A a;
};

void cuboid_equal(Cuboid& c1,Cuboid& c2)
{
    if(c1.get_high()==c2.get_high() && c1.get_length() == c2.get_length() && c1.get_width() == c2.get_width())
    {
        cout<<"equal"<<endl;
    } else
     {
         cout<<"not equal"<<endl;
     }
}


/*
void test01()
{
    Cuboid c1(1,2,3),c2(4,5,6);
    c1.calculate_volume();
    c2.calculate_volume();
    cuboid_equal(c1,c2);
}
*/

int main_1()
{

    stu s1(16,"jack");
    stu s2 = {17,"rose"};
    stu s3;
    cout << "Hello World!" << endl;

    //test01();
    return 0;
}
