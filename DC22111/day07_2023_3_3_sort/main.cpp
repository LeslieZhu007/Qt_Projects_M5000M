#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>

using namespace std;
void print(int val)
{
    cout<<val<<" ";
}

int main()
{
    vector<int> v1 = {14,1,23,5,1,5,3,13,1,53};
    sort(v1.begin(),v1.end());
    for_each(v1.begin(),v1.end(),print);
    cout<<endl;
cout<<"--------------------------------------"<<endl;
    //random_shuffle
    srand((unsigned int)time(NULL)); //每次出现的随机数
    vector<int> v2 ;
    for (int i=0;i<10 ;i++ ) {
        v2.push_back(i);
    }
    random_shuffle(v2.begin(),v2.end());
    for_each(v2.begin(),v2.end(),print);
    cout<<endl;
    cout<<"---------------------------------------------"<<endl;
    //merge
    vector<int> v3,v4;
    for (int i = 0;i<10 ;i++ ) {
        v3.push_back(i);
        v4.push_back(i+1);
    }
    vector<int> v;
    v.resize(v3.size()+v4.size());
    merge(v3.begin(),v3.end(),v4.begin(),v4.end(),v.begin());
    for_each(v.begin(),v.end(),print);
    cout<<endl;

    return 0;
}
