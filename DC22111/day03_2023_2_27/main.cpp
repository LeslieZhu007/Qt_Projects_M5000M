#include <iostream>
using namespace std;
class stu
{
    string name;
    int age;
public:
    stu(string name,int age):name(name),age(age){}
    void show();
    friend void display(const stu& s);
};

void stu::show()
{
    cout<<name<<endl;
}

void display(const stu& s)
{
    cout<<"name:"<<s.name<<'\t'<<"age:"<<s.age<<endl;
}
class monkey;
class dog
{
    int number;
    int weight;
public:
    dog(int number,int weight);
    friend void sum(dog &dog,monkey &monkey);
};

class monkey
{
    int number;
    int weight;
public:
    monkey(int number,int weight);
    friend void sum(dog &dog,monkey &monkey);
};

monkey::monkey(int number,int weight):number(number),weight(weight)
{

}

dog::dog(int number,int weight):number(number),weight(weight){}

void sum(dog &dog,monkey &monkey)
{
    cout<<"total sum:"<<dog.number + monkey.number<<endl;
    cout<<"total weight:"<<dog.number * dog.weight + monkey.number * monkey . weight<<endl;
}

int main()
{
    //      stu s1("jack",13);
    //      display(s1);
    dog d1(10,10);
    monkey m1(20,20);
    sum(d1,m1);

    return 0;
}
