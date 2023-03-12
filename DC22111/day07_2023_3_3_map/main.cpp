#include <iostream>
#include <map>
using namespace std;

void print(map<int,int> &m)
{
    for(map<int,int>::iterator it =m.begin();it!=m.end();it++)
    {
        cout<<"key:"<<it->first<<"\t"<<"value:"<<it->second<<endl;
    }
    cout<<"************************************"<<endl;
}

class compare
{
public:
    bool operator()(int v1,int v2)
    {
        return v1>v2;
    }
};

void print1(map<int,int,compare>&m)
{
    for(map<int,int,compare>::iterator it =m.begin();it!=m.end();it++)
    {
        cout<<"key:"<<it->first<<"\t"<<"value:"<<it->second<<endl;
    }
    cout<<"************************************"<<endl;
}

int main()
{
    map<int,int> m1;
    m1.insert(pair<int,int>(1,10));
    m1.insert(pair<int,int>(2,20));
    m1.insert(pair<int,int>(3,30));
    m1.insert(pair<int,int>(4,40));
    print(m1);
//    map<int,int> m2(m1);
//    map<int,int> m3;
//    m3=m1;
     if(!m1.empty())
     {
         cout<<"m1.size="<<m1.size()<<endl;
     } else
     {
         cout<<"m1 is empty"<<endl;
     }

     map<int,int> m2;
     m1.insert(pair<int,int>(10,100));
     m1.insert(pair<int,int>(20,200));
     m1.insert(pair<int,int>(30,300));
     m1.insert(pair<int,int>(40,400));
     m1.swap(m2);
     print(m1);
     print(m2);
cout<<"----------------------------------"<<endl;
     //插入删除

     //查找和统计
     m2.insert(pair<int,int>(23,33));
     m2.insert(make_pair(24,25));
     m2.insert(map<int,int>::value_type(3,32));
     print(m2);
     m2.erase(m2.begin());
     m2.erase(3);//按照key值删除

     //查找和统计
     map<int,int>::iterator pos = m2.find(23);
     if (pos!=m2.end()) {
         cout<<"key:"<<pos->first<<'\t'<<pos->second<<endl;
     } else
     {
         cout<<"no"<<endl;
     }

     cout<<"count:"<<m2.count(23)<<endl;

     //排序
     map<int,int,compare> m4;
     m4.insert(pair<int,int>(10,100));
     m4.insert(pair<int,int>(20,200));
     m4.insert(pair<int,int>(30,300));
     m4.insert(pair<int,int>(40,400));
     print1(m4);
    return 0;
}
