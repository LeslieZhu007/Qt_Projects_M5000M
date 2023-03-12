#include <iostream>
using namespace std;

//多重继承: 一个子类可由多个父类派生而来，在多重
//继承中，子类会包含每个父类的所有成员(除了私有成员,4大函数)
// class 子类名:继承方式 父类名1,继承方式 父类名2
class A
{
protected:
    int a_v;
public:
    A(){cout<<"A::no params constructor"<<endl;}
    A(int a):a_v(a){cout<<"A::params constructor"<<endl;}
    ~A(){cout<<"A::destructor"<<endl;}
    void show()
    {
        cout<<"A::a_v:"<<a_v<<endl;
    }
};

class B
{
protected:
    int b_v;
public:
    B(){cout<<"B::no params constructor"<<endl;}
   B(int b):b_v(b){cout<<"B::params constructor"<<endl;}
    ~B(){cout<<"B::destructor"<<endl;}
    void show()
    {
        cout<<"B::b_v:"<<b_v<<endl;
    }
};

class C:public A,public B
{
protected:
    int c_v;
public:
    C(){cout<<"C::no params constructor"<<endl;}
   C(int a,int b,int c):A(a),B(b),c_v(c){cout<<"C::params constructor"<<endl;}
    ~C(){cout<<"C::destructor"<<endl;}
   void show() //需要在子类中对该成员函数进行重写
   {
       cout<<"C::a_v:"<<a_v<<","<<"C::b_v:"<<b_v<<","<<"C::c_v:"<<c_v<<endl;
   }
};


int main()
{
    C c1(2,4,5);  //构造函数的调用顺序是根据继承顺序来的
    c1.show(); //如果C类不重写show,c1不知道调用A类还是B类的show
    return 0;
}
