#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(vector<int>& v)
{
    for(int i:v)cout<<i<<" ";
    cout<<endl;
}

void test01()
{
    /*
     *  vector构造函数
         函数原型：
         vector<T> v;                      //采用模板实现类对象，默认构造函数
         vector<v.begin(),v.end());  //将v[begin(),end()]区间中的元素拷贝给本身
         vector(n,elem);                  //构造函数将n个elem拷贝给本身
         vector(const vector& vec); //拷贝构造函数
     */
    vector<int> v1 = {1,3,3,4,5};
        print(v1);
        vector<int> v2(v1.begin(),v1.end());
        print(v2);
        vector<int> v3(10,100);
        print(v3);
        vector<int> v4(v3);
        print(v4);

}



int main()
{
    test01();
    return 0;
}
