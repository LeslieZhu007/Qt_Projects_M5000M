#include <iostream>
using namespace std;

//子类继承父类的格式
class base
{
protected:
    string name;
    int age;
public:
    base(string name,int age):name(name),age(age){}
    void show()
    {
        cout<<name<<","<<age<<endl;
    }
};

class son:public base
//class son:protected base
{
private:
    int score;
public:
//    base(string name,int age):name(name),age(age){} //继承过程中不继承构造函数
//    void show()
//    {
//        cout<<name<<","<<age<<endl;
//    }

    //当在子类中初始化父类继承下来的成员变量的时候，需要在
    //子类的构造函数中显性调用父类的构造函数
    son(string name,int age,int score):base(name,age),score(score){}
    void display()
    {
        cout<<name<<","<<age<<","<<score<<endl;
    }
//protected:
//    string name;
//    int age;
};

class grandson:public son
{
public:
    grandson(string n,int a,int s):son(n,a,s){}
    void fun1()
    {
        cout<<name<<","<<age<<endl; //公共的或者受保护的
    }
};


int main()
{
    base b1("jack",23);

    son s1("rose",23,54);
    s1.show();
    s1.display();

    grandson g1("kate",20,55);


    return 0;
}
