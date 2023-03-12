#include <iostream>
#include <typeinfo>
using namespace std;

//decltype 在编译时期推导表达式的类型，
//不用初始化，用法类似于sizeof
int fun1()
{
    return 10;
}

auto fun2()
{
    return 'g';
}

int main()
{
    decltype (fun1()) x;
    cout<<typeid (x).name()<<endl;
    decltype (fun2()) y = fun2();
    cout<<y<<endl;
    cout<<typeid (y).name()<<endl;
    return 0;
}
