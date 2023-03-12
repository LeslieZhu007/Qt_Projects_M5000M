#include <iostream>
#include <typeinfo>
using namespace std;

template<typename T>
T sum(T a,T b)
{
    cout<<"T template"<<endl;
    return a+b;
}

template<typename T1,typename T2>
T1 sum(T1 a,T2 b)
{
     cout<<"T1 T2 template"<<endl;
    return a+b;
}

int sum(int a,int b)
{
    cout<<"int "<<endl;
    return a+b;
}

/**********************class template********************/
template <class T1,class T2>
class student
{
    T1 key;
    T2 value;
public:
    student(T1 k,T2 v):key(k),value(v){}
    void show();
};

//类外实现类中的函数需要再次指定模板
template<class T1,class T2>
//指定模板的时候必须给类指定模板参数
void student<T1,T2>::show()
{
    cout<<key<<","<<value<<endl;
}

/*******************************************/
template <class T1,class T2>
class person
{
    T1 name;
    T2 age;
public:
    person(T1 n,T2 a):name(n),age(a){}
    void show()
    {
        cout<<name<<","<<age<<endl;
    }
};

//1>指定传入的类型-->直接显示数据类型
void print1(person<string,int> &p)
{
    p.show();
}

template<class T1,class T2>
void print2(person<T1,T2> & p)
{
    p.show();
}

template<class T>
void print3(T &p)
{
    cout<<typeid (T).name()<<endl;
    p.show();
}

/*******************************************/
template <class T>
class base
{
public:
    T v;

};

class son:public base<int>  //父类必须指定空间
{

};

template <class T,class T1>
class son1:public base<T>
{
    T1 v1;
public:
    son1(){cout<<"T's type:"<<typeid(T).name()<<endl;cout<<"T1's type:"<<typeid(T1).name()<<endl;}
};

int main()
{
    /*
    cout << sum(1,2) << endl;  //int
    cout<<sum<>(1,2)<<endl;
     cout << sum(1.1,2.2) << endl;
     cout<<sum<double>(2.1,2.2)<<endl;
     cout<<sum(90.9,12)<<endl;
     */
    /*
    student<int,int> s1(1,2);
    s1.show();
    student<string,char> s2("abc",'x');
    s2.show();
    */

    /********************************/
    /*
    person<string,int>p1("jack",14);
    print1(p1);

     person<string,int>p2("rose",15);
     print2(p2);

     person<string,int>p3("kate",16);
     print3(p3);
     */
     /****************************/
     son1<int,char> s1;
    return 0;
}
