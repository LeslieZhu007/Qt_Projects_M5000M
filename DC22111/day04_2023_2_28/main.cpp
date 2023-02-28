#include <iostream>
using namespace std;
class complex
{
    int real,image;
public:
    complex()=default;
    complex(int r,int i):real(r),image(i){}
    /*
    //返回值: complex
    //函数名: operator+
    const complex operator+(const complex &R)
    {
        complex temp;
        temp.real = this->real + R.real;
        temp.image = this->image + R.image;
        return temp;
    }
    */
    friend const complex operator+(const complex &L,const complex &R);
    void show()
    {
        cout<<real<<","<<image<<endl;
    }

    /*
    bool operator>(const complex &R)
    {
        if(this->real > R.real && this->image > R.image)
        {
            return true;
        } else
        {
            return false;
        }
    }
    */
    friend bool operator>(const complex &L,const complex &R);

    complex operator+=(const complex &R)
    {
        this->real+=R.real;
        this->image+=R.image;
        return *this;
    }

    //单目运算符重载
    const complex operator-()
    {
        complex temp;
        temp.real = -this->real;
        temp.image = -this->image;
        return temp;
    }

    //自增自减运算符
    //前置自增
    const complex& operator++(void)
    {
        ++this->real;
        ++this->image;
        return *this;
    }
    //后置自增
    const complex operator++(int)
    {
        complex temp;
        temp.real = this->real++;
        temp.image = this->image++;
        return temp;
    }


};

const complex operator+(const complex &L,const complex &R)
{
    complex temp;
    temp.real = L.real + R.real;
    temp.image = L.image + R.image;
    return temp;
}

bool operator>(const complex &L,const complex &R)
{
    if(L.real > R.real && L.image > R.image)
    {
        return true;
    } else
    {
        return false;
    }
}

class A
{
    int a;
public:
    A(int a):a(a){}
    void show()
    {
        cout<<"a:"<<this->a<<endl;
    }
};

//函数指针: 指向函数的指针，可以通过指针来调用函数
//指针函数: 函数的返回值是指针类型
void test01()
{
    A a(100);

    void (A::*p1)() = &A::show;   //定义一个指针p1,指向了函数的首地址(&函数名)
   (a.*p1) ();   //通过p1调用show函数

    A *pa = new A(200); //堆区
   (pa->*p1) ();   //pa->show()

    delete  pa;
}

void test02()
{
    complex c1(1,2),c2(3,4),c3;
    c3 = c1+c2;   //解释为----> c1.operator+(c2)
    c3.show();
}

void test03()
{
    complex c1(1,2),c2(3,4);
    cout<<(c2>c1?"yes":"no")<<endl;  //解释为 ------>  c2.operator>(c1)
}

void test04()
{
    complex c1(1,2),c2(3,4),c3;
    c1+=c2;  //--->解释为c1.operator+=(c2)
    c1.show();
}

void test05()
{
     complex c1(1,2),c2(3,4),c3;
     c3 = -c1;  //解释为 operator-(c1)
     c3.show();
}

void test06()
{
     complex c1(1,2);
     ++c1;
     c1.show();
}

void test07()
{
     complex c1(1,2),c3;
     c3 = c1++;
     c1.show();
     c3.show();
}

int main()
{
    //test02();
    //test03();
    //test05();
    test06();
    test07();
    return 0;
}
