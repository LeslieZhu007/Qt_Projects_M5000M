#include <iostream>
using namespace std;

class father
{
public:
    father(){cout<<"F:: no params constructor"<<endl;}
    father(string name,int age):name(name),age(age){cout<<"F:: 2 params constructor"<<endl;}
    father(const father & R):name(R.name),age(R.age)
    {
        cout<<"F:: copy constructor"<<endl;
    }
    father& operator=(const father&R)
    {
        if(this!=&R)
        {
            this->name = R.name;
            this->age = R.age;

        }
        cout<<"F:: copy operator"<<endl;
         return *this;

    }
    ~father()
    {
        {cout<<"F destructor"<<endl;}
    }

protected:
    string name;
    int age;
};

class son:public father
{
private:
    string addr;
public:
    son()
    {
        cout<<"SON:: no params constructor"<<endl;
    }
    son(string name,int age,string addr):father(name,age),addr(addr)
    {
         cout<<"SON:: 3 params constructor"<<endl;
    }
    son(const son& R):father(R),addr(R.addr)   //显性调用父类拷贝构造函数       //father已有拷贝构造函数
    {
        cout<<"SON:: copy constructor"<<endl;
    }
    son& operator=(const son& R)
    {
        if(this!=&R)
        {
        father::operator=(R);   //显性调用父类拷贝赋值函数  this->name = R.name   this->age = R.age
        this->addr = R.addr;
        }
        cout<<"SON:: copy operaor"<<endl;
        return *this;
    }

    ~son()
    {
        cout<<"SON:: destructor"<<endl;
    }
    void show()
    {
        cout<<name<<","<<age<<","<<addr<<endl;
    }
};

int main()
{
    son s1; //无参构造
    son s2("jack",24,"shanghai"); //有参构造
    son s3(s2);  //调用拷贝构造
    s1 = s3;   //调用拷贝赋值函数
    return 0;
}
