#include <iostream>
#include <cmath>
//菱形继承

using namespace std;

class parent
{
protected:
    int age;
public:
    parent()=default;
    explicit parent(int age):age(age){}
    virtual void show()
    {
        cout<<age<<endl;
    }

};

class student:public parent
{
private:
    int score;
public:
    student()=default;
    explicit student(int age,int score):parent(age),score(score){}
    void show()
    {
        cout<<"age:"<<age<<'\t'<<"score:"<<score<<endl;
    }
};


/**************Practice beigin**************************/
class shape
{
public:
    //shape()=default;
    //virtual void calculate_area()=0;  写成纯虚函数也可以
    virtual void calculate_area()
    {

    }

};

class rectangle:public shape
{
protected:
    int width;
    int length;
public:
    rectangle()=default;
    rectangle(int width,int length):width(width),length(length){}
    void calculate_area()
    {
        cout<<"rectangle area:"<<width*length<<endl;
    }
};

class circle:public shape
{
protected:
    int radius;
public:
    circle()=default;
    circle(int radius):radius(radius){}
    void calculate_area()
    {
        cout<<"circle area:"<<3.14*radius*radius<<endl;
    }
};


/**************Practice end**************************/



int main()
{
    /*
    parent p1(34);
    student s1(12,43);
    parent *p = nullptr;
    p = &p1;
    p->show();
    p = &s1;
    p->show();

    parent& r1 = p1;
    r1.show();
    parent&r2 = s1;
    r2.show();
    */
    rectangle r1(3,4);
    circle c1(3);

    shape *s1 = &r1;
    s1->calculate_area();

    shape *s2 = &c1;
    s2->calculate_area();

    shape& rr1 = c1;
    rr1.calculate_area();

    shape& rr2 = r1;
    rr2.calculate_area();


    return 0;
}
