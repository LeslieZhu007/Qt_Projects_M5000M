#include <iostream>
#include <numeric>
#include <vector>
#include<algorithm>
using namespace std;

void print(int val)
{
    cout<<val<<" ";
}

int main()
{
    /*
    vector<int> v1 = {14,15,15,1513,3};
    int num = accumulate(v1.begin(),v1.end(),0);
    cout<<"num:"<<num<<endl;

    fill(v1.begin(),v1.end(),100);
    for(int i:v1)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    */

    //集合
    //1.求交集
    vector<int> v1 = {1,1,1,2,4,5,12,25};
    vector<int> v2 = {1,1,1,2,3,3,4,4,5,6,7,7,8};
    vector<int> v;
    v.resize(min(v1.size(),v2.size()));
    vector<int>::iterator it = set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),v.begin());
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"------------------------------"<<endl;
    for_each(v.begin(),it,print);
    cout<<endl;
    cout<<"------------------------------"<<endl;
    //取并集
    v.clear();
    v.resize(v1.size()+v2.size());
    vector<int>::iterator it1 = set_union(v1.begin(),v1.end(),v2.begin(),v2.end(),v.begin());
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
     cout<<"------------------------------"<<endl;
    for_each(v.begin(),v.end(),print);
    cout<<endl;
 cout<<"------------------------------"<<endl;
    //差集
    v.clear();
    v.resize(max(v1.size(),v2.size()));
    vector<int>::iterator it2 = set_difference(v1.begin(),v1.end(),v2.begin(),v2.end(),v.begin());
    for_each(v.begin(),it2,print);
    cout<<endl;
    return 0;
}

