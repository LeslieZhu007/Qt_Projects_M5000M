#include <iostream>
#include <typeinfo>
using namespace std;

auto Max(int x,int y)  //c++ 14
{
    return x>y?x:y;
}

int main()
{
    int a = 10;
    auto au_a = a;
    cout<<typeid (au_a).name()<<endl;


    //auto变量在定义的时候必须初始化==>类似于const
    auto a1 = 3;
    auto a2{32};

    //定义auto序列变量时必须始终推导为同一个类型
    auto a3 = 1,a4 =3,a5{43};

    int a6{3};
    auto ra6 = a6;
    cout<<typeid (ra6).name()<<endl;
    cout<<&ra6<<'\t'<<&a6<<endl;

    const int a7 = 12;
    auto a8 = a7;
    a8 = 10;
    cout<<typeid (a8).name()<<endl;


    int a9 = 10;
    auto& a10 = a9;
    cout<<&a9<<'\t'<<&a10<<endl;
    cout<<typeid (a10).name()<<endl;

    const int a11=20;
    auto& a12 = a11;
    //a12 = 30;   a12是const类型的
    cout<<typeid (a12).name()<<endl;

    //初始化表达式是数组，auto关键字推导的类型为指针
    int a13[3] = {1,2,3};
    auto a14 = a13;
    cout<<typeid (a14).name()<<endl;

    //若初始化表达式是数组,且auto带上&，则推导为数组
    int a15[3] = {1,2,3};
    auto& a16 = a15;
    cout<<typeid (a16).name()<<endl;


    return 0;
}
