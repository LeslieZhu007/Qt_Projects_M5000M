#include <iostream>
#include <list>
using namespace std;

void print(list<int> l)
{
    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"----------------------------"<<endl;
}

bool compare(int v1,int v2)
{
    return v1>v2;
}
int main()
{
    /*
    list<int> l1 = {1,2,3,4,5};
    print(l1);
    list<int> l2(l1.begin(),l1.end());
    print(l2);

    list<int> l3(l2);
    print(l3);

    list<int> l4(4,300);
    print(l4);
    */
//    list<int> l1 = {1,4,1};
//    print(l1);
//    list<int> l2;
//    l2 = l1;
//    print(l2);

//    list<int> l3;
//    l3.assign(l2.begin(),l2.end());
//    print(l3);

//    list<int> l4;
//    l4.assign(10,2000);
//    print(l4);

//    l4.swap(l1);
//    print(l1);
//    print(l4);


    list<int> l1 = {1,2,3,4,5};
    print(l1);
    if(l1.empty())
    {
        cout<<"l1 empty"<<endl;
    } else
    {
         cout<<"l1 not empty"<<endl;
    }

    cout<<"size:"<<l1.size()<<endl;

    l1.resize(10,99);
    print(l1);

    l1.resize(20);
    print(l1);


    list<int> l2;
    l2.push_back(1);
    l2.push_back(2);
    l2.push_back(3);
    l2.push_back(4);
    l2.push_back(5);

    print(l2);
    l2.pop_back();
    l2.pop_front();

    print(l2);

    l2.insert(l2.begin(),1001);
    print(l2);

    l2.erase(l2.begin());
    print(l2);

    l2.push_front(999);
    l2.push_front(888);
    print(l2);

    l2.remove(2);
    print(l2);

    l2.clear();
    print(l2);


    /**********数据翻转和排序*************/
    list<int> l3 = {1,19,22,4,6,6,9};
    print(l3);
    l3.reverse();
    print(l3);

    //l3.sort();
    l3.sort(compare); //compare 是仿函数
    print(l3);

    return 0;
}
