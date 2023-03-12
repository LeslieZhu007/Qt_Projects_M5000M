#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;
typedef unsigned int uint;
void print(const deque<int>& d)
{
    for(int i:d)
    {
        cout<<i<<" ";
        cout<<endl;
    }
    cout<<"------------------------------"<<endl;
}

bool mycompare(int a,int b)
{
    return a<b;
}

int main()
{
//    deque <int> d1 = {1,2,3,4,5};
//    deque<int> d2 = {6,7,8,9,10};
//    d1.push_back(100);
//    d1.push_front(100);
//    print(d1);
//    d1.pop_back();
//    d1.pop_front();
//     print(d1);

//     d1.insert(d1.begin(),1000);
//     print(d1);
//     d1.insert(d1.end(),3,100);
//     print(d1);

//     d1.insert(d1.begin(),d2.begin(),d2.end());
//     print(d1);

//     d1.erase(d1.begin());
//     d1.erase(d1.begin(),d1.end());
//     print(d1);

    deque<int> d1 = {1,4,3,2,6};
    for(uint i= 0;i<d1.size();i++)
    {
        cout<<d1[i]<<" ";

    }
    cout<<endl;

    for(uint i = 0;i < d1.size();i++)
    {
        cout<<d1.at(i)<<" ";
    }
    cout<<endl;

    cout<<d1.front()<<endl;
    cout<<d1.back()<<endl;

    print(d1);
    sort(d1.begin(),d1.end(),mycompare);  //
    print(d1);


    return 0;
}
