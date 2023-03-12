#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define VALUE 2
#define AGE 20
using namespace std;
void print1(int val)
{
    cout<<val<<" ";
}

class print2
{
public:
    void operator()(int val)
    {
        cout<<val<<" ";
    }
};

class Transform
{
public:
    int operator()(int val)
    {
        return val;
    }
};

class Person
{
public:
    string name;
    int age;
public:
    Person(string name,int age):name(name),age(age){}
    bool operator==(const Person &R)
    {
        if (this->name == R.name && this->age == R.age) {
            return true;
        } else
        {
            return false;
        }
    }
};

class Greater1 //predicate 谓词
{
public:
    bool operator() (int val)
    {
        return val>VALUE;
    }
};

class Greater2 //predicate 谓词
{
public:
    bool operator() (Person& p)
    {
        return p.age>AGE;
    }
};

int main()
{

    /*
     * for_each
    vector<int> v1 = {1,5,2,2,51,12,5};
    for_each(v1.begin(),v1.end(),print1);  //普通函数
    cout<<endl;
    for_each(v1.begin(),v1.end(),print2());  //函数对象
    */

    /*
    //transform
    vector<int> v1 = {1,5,2,2,51,12,5};
    vector<int> v2;
    //目标容器需要提前开辟空间
   v2.resize(v1.size());
   transform(v1.begin(),v1.end(),v2.begin(),Transform());
   for_each(v2.begin(),v2.end(),print1);
   cout<<endl;
   */

    /*find


    vector<int> v1 = {1,5,2,2,51,12,5};
    vector<int>::iterator it  = find(v1.begin(),v1.end(),2);
    if (it == v1.end()) {
        cout<<"not found"<<endl;
    } else
    {
        cout<<"found it"<<endl;
    }

    Person p1("jack",11);
    Person p2("rose",12);
    Person p3("kate",14);
    Person p4("jenny",13);
    vector<Person> v2= {p1,p2,p3,p4};
    vector<Person>::iterator it1 = find(v2.begin(),v2.end(),p3);
    if (it1==v2.end()) {
        cout<<"not found"<<endl;
    } else
    {
        cout<<"found it:"<<it1->name<<","<<it1->age<<endl;
    }
*/

    /*
    //find_if
    vector<int> v1 = {1,5,2,2,51,12,5};
    vector<int>::iterator it = find_if(v1.begin(),v1.end(),Greater1());
    if (it==v1.end()) {
        cout<<"not found"<<endl;
    } else
    {
        cout<<*it<<endl;
    }


    Person p1("jack",11);
    Person p2("rose",12);
    Person p3("kate",14);
    Person p4("jenny",21);
    vector<Person> v2= {p1,p2,p3,p4};
    vector<Person>::iterator it1 = find_if(v2.begin(),v2.end(),Greater2());
    if (it1==v2.end()) {
        cout<<"not found"<<endl;
    } else
    {

        cout<<"found it:"<<it1->name<<","<<it1->age<<endl;
    }
   */

    /*
    //adjacent_find
    vector<int> v1 = {1,5,2,2,51,12,5};
    vector<int>::iterator it = adjacent_find(v1.begin(),v1.end());
    if (it==v1.end()) {
        cout<<"not found"<<endl;
    } else
    {
        cout<<*it<<endl;
    }
   */

    /*
    //binary_search
    //一定要是有序序列
    vector<int> v1 = {1,5,7,9,51,78,98};
    bool ret = binary_search(v1.begin(),v1.end(),5);
    if (ret) {
        cout<<"found it"<<endl;
    } else
    {
        cout<<"not found"<<endl;
    }
    */

    //count_if
    vector<int> v1 = {1,5,2,2,51,12,5};

        cout<<"elements greater than 2 count:"<<count_if(v1.begin(),v1.end(),Greater1())<<endl;
        cout<<endl;

        Person p1("jack",11);
        Person p2("rose",12);
        Person p3("kate",14);
        Person p4("jenny",21);
        vector<Person> v2= {p1,p2,p3,p4};
        cout<<"age greater than 17 count:"<<count_if(v2.begin(),v2.end(),Greater2())<<endl;



    return 0;
}
