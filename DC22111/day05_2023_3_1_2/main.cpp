#include <iostream>
using namespace std;

//子类继承父类的格式
class base
{
protected:
    string name;
    int age;
public:
    base(string name,int age):name(name),age(age){cout<<"base constructor"<<'\t'<<this<<endl;}
    void show()
    {
        cout<<name<<","<<age<<endl;
    }
    ~base()
    {
        cout<<"base destructor"<<'\t'<<this<<endl;
    }
};

class son:public base
//class son:protected base
{
    protected:
    int score;
public:
//    base(string name,int age):name(name),age(age){} //继承过程中不继承构造函数
//    void show()
//    {
//        cout<<name<<","<<age<<endl;
//    }

    //当在子类中初始化父类继承下来的成员变量的时候，需要在
    //子类的构造函数中显性调用父类的构造函数
    son(string name,int age,int score):base(name,age),score(score){cout<<"son constructor"<<'\t'<<this<<endl;}
    void display()
    {
        cout<<name<<","<<age<<","<<score<<endl;
    }

    void show()
    {
        cout<<name<<","<<age<<","<<score<<endl;
    }
    ~son(){cout<<"son destructor"<<'\t'<<this<<endl;}
//protected:
//    string name;
//    int age;
};

class grandson:public son
{
    char sex;
public:
    grandson(string name,int age,int score,char sex):son(name,age,score),sex(sex){cout<<"grandson constructor"<<'\t'<<this<<endl;}
    ~grandson(){cout<<"grandson destructor"<<'\t'<<this<<endl;}
};

int main()
{
    base b1("jack",23);
//    b1.show();
    son s1("rose",23,54);
//    s1.show();
//    s1.display();

    grandson g1("jenny",12,89,'F');
    g1.show();


    return 0;
}
