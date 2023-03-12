#include <iostream>

using namespace std;
using namespace std;
class Stu
{
    string name;
    int age;
public:
    Stu(string n,int a):name(n),age(a){}
    void show();
    friend void display(const Stu& s);//友元声明
};
void Stu::show()//类内声明之后在类外的定义
{
    cout<<name;
}
void display(const Stu& s)
{
    cout<<"name:"<<s.name<<'\t'<<"age:"<<s.age<<endl;
}


class Dog;
class Monkey
{
    int num,weigth;
public:
    Monkey(int n,int w);
    friend void sum(Dog& d,Monkey& m);
};
class Dog
{
    int num,weigth;
public:
    Dog(int n,int w);
    friend void sum(Dog& d,Monkey& m);
};
Dog::Dog(int n,int w)
{
    num = n;
    weigth = w;
}
Monkey::Monkey(int n,int w)
{
    num = n;
    weigth = w;
}
void sum(Dog& d,Monkey& m)
{
    cout<<"num:"<<d.num+m.num<<endl;
    cout<<"weight:"<<d.weigth+m.weigth<<endl;
}

void test01()
{
    Dog d1(12,43);
       Monkey m1(12,34);
       sum(d1,m1);
}

int main()
{
   test01();
    return 0;
}
