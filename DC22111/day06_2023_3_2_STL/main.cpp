#include <iostream>
#include<vector>
#include<algorithm> //用到的算法都在此头文件之中
using namespace std;
 void print(int val){cout<<val<<endl;}//定义仿函数

 class person
 {
 public:
     string name;
     int age;
 public:
     person(string name,int age):name(name),age(age){}
 };

int main()
{
    /*
    //int arr[] = {0}; //通过下标进行访问,
    vector<int> v1; //定义单端容器v1
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);
    //第一种遍历方式
    for(int i:v1){ cout<<i;cout<<endl;}

    //第二种遍历方式
    vector<int>::iterator it = v1.begin();//将容器的首地址赋给迭代器对象
    while (it!=v1.end()) {
        cout<<*it++<<endl; //先取*it的值，再指针后移一个单位
    }

    cout<<"*******************************"<<endl;
    //第三种遍历方式
    for (vector<int>::iterator it = v1.begin();it!=v1.end() ;it++ ) {
        cout<<*it<<endl;
    }

     //第四种遍历方式
    cout<<"*******************************"<<endl;
    for_each(v1.begin(),v1.end(),print);
    */

    /*************************************/
    /*
    person p1("jack",14);
    person p2("rose",24);
    vector<person> v2;
    v2.push_back(p1);
    v2.push_back(p2);
    for (vector<person>::iterator it = v2.begin();it!=v2.end() ;it++ ) {
        cout<<"name:"<<it->name<<","<<"age:"<<it->age<<endl;
    }

    cout<<"-----------------------------------------------------------"<<endl;
    vector<person*> v3;
    v3.push_back(&p1);
    v3.push_back(&p2);

    for (vector<person*>::iterator it = v3.begin();it!=v3.end() ;it++ ) {
        cout<<"name:"<<(*it)->name<<","<<"age:"<<(*it)->age<<endl;
    }
   */

    /***************************************************/
    vector<vector<int>> v;
    vector<int> v1 = {1,2,3}; //C++ 11才允许的操作
    vector<int> v2 = {4,5,6};
    v.push_back(v1);
    v.push_back(v2);
    for(vector<vector<int>>::iterator it = v.begin();it!=v.end();it++)
    {
        for (vector<int>::iterator sit = it->begin();sit!=it->end() ;sit++ ) {
            cout<<*sit<<" ";
        }
        cout<<endl;
    }
    return 0;
}
