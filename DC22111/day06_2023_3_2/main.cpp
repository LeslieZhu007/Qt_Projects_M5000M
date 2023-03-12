#include <iostream>
using namespace std;

class base
{
public:
    base(){cout<<"base:: no params constructor"<<endl;}
    virtual  ~base(){cout<<"base:: destructor"<<endl;}
    //当加了虚析构之后，其后所以的子类的虚构函数都是虚析构函数
    virtual void show(int x); //定义虚函数     final：阻止类的进一步派生和类的重写
};

class child1:public base
{
public:
    child1(){cout<<"child1:: no params constructor"<<endl;}
    ~child1(){cout<<"child1:: destructor"<<endl;}
};

class child2:public child1
{
public:
    child2(){cout<<"child2:: no params constructor"<<endl;}
    ~child2(){cout<<"child2:: destructor"<<endl;}
};

/*************纯虚函数******************/
class A //此时这个类叫做抽象类
{
public:
    virtual void show()=0; //纯虚函数
    virtual ~A()=default;
};

class B:public A
{
    void show()
    {
        cout<<"hey man......"<<endl;
    }
};

/*********************override/final******************/

class son:public base
{
public:
    void show(int x) override;  //保证子类虚函数和父类移植
    //void show(double y) override;
};






int main()
{









    /*
    //A a2; //不能使用抽象类来定义对象
    A *a = new B;
    a->show();
    */



    /*
    base *a = new child1();
    cout<<"--------------------------"<<endl;
    base *b = new child2();
    cout<<"--------------------------"<<endl;
    child1 *c = new child2();
    cout<<"--------------------------"<<endl;

    delete  a;
    a = nullptr;
    cout<<"--------------------------"<<endl;
    delete  b;
    b = nullptr;
    cout<<"--------------------------"<<endl;
    delete  c;
    c = nullptr;
    cout<<"--------------------------"<<endl;
    */
    return 0;
}
