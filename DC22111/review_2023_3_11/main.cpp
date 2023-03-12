#include <iostream>

using namespace std;
class Stu
{
    static int age;//定义静态成员变量
    int name;
public:
    Stu(int n):name(n){}
    static void show()//定义静态成员函数
    {
        cout<<","<<age<<endl;//只能访问静态的成员变量
    }
};
int Stu::age=999;

void test01()
{
    Stu s1(23);
       s1.show();
       Stu s2(34);
       s2.show();
   //    s2.name = 32;
   //    Stu::age =54;可用过类名进行访问
       Stu::show();
       cout<<sizeof(s1)<<endl;
}
int main()
{
    test01();
    return 0;
}
