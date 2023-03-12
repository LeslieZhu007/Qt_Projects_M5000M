#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> &v)
{
    /*
    for(int i:v)
    {
        cout<<i<<" ";
        cout<<endl;
    }

    for(unsigned int i = 0;i < v.size();i++)
    {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    */
    for(unsigned int i = 0;i < v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"--------------------------"<<endl;
}
int main()
{
    /*
    vector<int> v1 = {1,2,3,4,5,6,7,8,9,10};
    print(v1);

    vector<int> v2(v1.begin(),v1.end());
    print(v2);
    vector<int> v3(10,100);
    print(v3);

    vector<int> v4(v3);
    print(v4);

    vector<int> v5 = {1,3,5,7,9};
    cout<<v5.capacity()<<endl;
    cout<<v5.size()<<endl;

    v5.resize(15,100);
    print(v5);
    cout<<"v5.capacity="<<v5.capacity()<<endl;
    cout<<"v5.size="<<v5.size()<<endl;
    v5.push_back(999);
    print(v5);
    v5.pop_back();
    print(v5);

    v5.insert(v5.begin(),100);
    print(v5);

    v5.erase(v1.begin());
     print(v5);
     */

    vector<int> v1 = {1,2,3,4};
    print(v1);
    cout<<v1.front()<<endl;
    cout<<v1.back()<<endl;

    vector<int> v2 = {5,6,7,8};
    v1.swap(v2);
    print(v2);
    print(v1);

    //实际用途: 收缩内存空间
    vector<int> v;
    for(int i = 0;i < 10000;i++)
    {
        v.push_back(i);
    }
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    v.resize(3);
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    vector<int>(v).swap(v);
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    return 0;
}
