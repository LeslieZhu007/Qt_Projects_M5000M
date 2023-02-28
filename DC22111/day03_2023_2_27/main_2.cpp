#include <iostream>
using namespace std;
class stu
{
    string name;
    int age;
public:
    stu() {cout<<"no params constructor"<<endl;}
    stu(string n,int a):name(n),age(a)
    {
        cout<<"2 params constructor"<<endl;
    }
    ~stu()
    {
          cout<<"deconstructor"<<endl;
     }
//    stu(const stu &s)
//    {
//        this->age = s.age;
//        this->name =s.age;
//        cout<<"copy constructor"<<endl;
//    }
    stu(const stu &s):name(s.name),age(s.age){cout<<"copy constructor"<<endl;}
};

int main2()
{
    stu s1;
    stu s2("jack",18);
    stu s3(s2);    //拷贝构造
    stu s4 = s3;  //拷贝构造
    stu *ps = new stu(s2); //拷贝构造
    delete ps;
    return 0;
}
