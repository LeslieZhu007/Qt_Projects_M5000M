#ifndef PERSON_HPP
#define PERSON_HPP
#include <iostream>
using namespace std;
template <class T1,class T2>
class person
{
    T1 name;
    T2 age;
public:
    person(T1 n,T2 a);
    void show();
};

template <class T1,class T2>
person<T1,T2>::person(T1 n,T2 a)
{
    this->name = n;
    this->age = a;
}

template <class T1,class T2>
void person<T1,T2>::show()
{
    cout<<"name:"<<name<<'\t'<<"age:"<<age<<endl;
}

#endif // PERSON_HPP
