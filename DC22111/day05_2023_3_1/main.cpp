#include <iostream>
using namespace std;
//静态成员变量
class stu
{
    static int age; //定义静态成员变量
    double name;
public:
    stu(double name):name(name){}
    static void show()  //静态成员函数只能访问静态成员变量
    {    //静态成员函数没有this指针
        cout<<","<<age<<endl;
    }
};
int stu::age = 10;
//int stu::age;  默认为0
int main()
{
    stu s1(23);
    s1.show();
    stu s2(24);
    s2.show();
    stu::show();

    cout<<sizeof(s1)<<endl;
    cout << "Hello World!" << endl;
    return 0;
}
