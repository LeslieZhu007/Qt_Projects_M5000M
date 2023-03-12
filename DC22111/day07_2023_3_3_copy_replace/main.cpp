#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define VALUE  2
void print(int val)
{
    cout<<val<<" ";
}

class compare
{
public:
    bool operator()(int val)
    {
        return val>VALUE;
    }
};

int main()
{
    vector<int> v1 = {1,4,1,5,1,556,3};
    vector<int> v2;
    v2.resize(v1.size());
    copy(v1.begin(),v1.end(),v2.begin());
    for_each(v1.begin(),v1.end(),print);
    cout<<endl;
    for_each(v2.begin(),v2.end(),print);
    cout<<endl;
    replace(v1.begin(),v1.end(),1,100);
    for_each(v1.begin(),v1.end(),print);

    cout<<endl;

    //大于2的替换成1000
    vector<int> v3 = {1,4,1,5,1,556,3};
    replace_if(v3.begin(),v3.end(),compare(),1000);
    for_each(v3.begin(),v3.end(),print);

    cout<<endl;
    cout<<"----------------------------------"<<endl;
    swap(v1,v2);
    for_each(v1.begin(),v1.end(),print);
    cout<<endl;
    for_each(v2.begin(),v2.end(),print);
    cout<<endl;

    return 0;
}
