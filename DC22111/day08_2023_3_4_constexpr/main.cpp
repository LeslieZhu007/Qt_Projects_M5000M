#include <iostream>
using namespace std;
//常量表达式

constexpr int func(int n)
{
    return n;
}


int main()
{
    constexpr char str[] = "hey man";
    const int i = 10; //字面值属于常量表达式
    const int j = i+1; //j是常量表达式
    int k = i; //k不是常量表达式
    //const int m = get();  //不是常量表达式，因为函数在允许时期才发生
    //
    constexpr int *p1 = nullptr;
    //p1 = &i;
    int l = 10;
   // constexpr int &rl = l;

   // constexpr string str1 = "hey man";

    cout<<"-------------------------------------"<<endl;
    int n = 10;
    const int m = 10;
    constexpr int i1 = func(10);
    //constexpr int j1= func(n);
    constexpr int k1 = func(m+122);

    return 0;
}
