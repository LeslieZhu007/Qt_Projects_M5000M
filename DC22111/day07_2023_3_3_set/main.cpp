#include <iostream>
#include <set>
using namespace std;
void print(set<int> s)
{
    for(int i:s)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"--------------------------"<<endl;
}

class compare
{
public:
    bool operator()(int v1,int v2)
    {
        return v1>v2;
    }
};

void print1(set<int,compare>& s)
{

}

bool compare(int a,int b)
{
    return a>b;
}
int main()
{
    set<int> s1 ={1,1,3,3,4,4,2,2};

    set<int> s2(s1);
    print(s1);
    print(s2);

    set<int> s3;
    s3=s2;
    print(s3);

    set<int> s4;
    s4.insert(132);
    s4.insert(133);
    s4.insert(134);
    s4.insert(135);
    print(s4);

    s4.erase(s4.begin());
    print(s4);

    s4.erase(133);
    print(s4);


    set<int> s5 = {1,2,3,4,5,6,7,8,9,10};
    set<int>::iterator it = s5.find(2);
    if (it!=s5.end()) {
        cout<<"*it:"<<*it<<endl;
    } else
    {
        cout<<"no"<<endl;
    }


     set<int> s6 = {1,2,3,4,5,6,7,8,9,10};
     pair<set<int>::iterator,bool> it1 = s6.insert(10);
     if (it1.second) {
         cout<<"success"<<endl;
     } else
     {
         cout<<"failure"<<endl;
     }

     multiset<int> m1 = {10,11,12,14};
     for (int i:m1 ) {
         cout<<i<<" ";
     }
     cout<<endl;

     //队组
     pair<string,int> p1("jack",18);
     cout<<"name:"<<p1.first<<","<<"age:"<<p1.second<<endl;

     pair<string,int> p2 = make_pair("rose",20);
     cout<<"name:"<<p2.first<<","<<"age:"<<p2.second<<endl;



     set<int> s7 = {1,2,5,64,3,10};
     print(s7);

     //set<int,compare> s8;
     //s8 = {14,4,1,5,32,5};
    return 0;
}
