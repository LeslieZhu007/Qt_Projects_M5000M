#include <iostream>
#include <list>
using namespace std;


class Object
{
public:
    list<Object*> child;  //定义子组件的链表
    Object(Object *parent = nullptr)
    {
        if (parent!=nullptr) {
            //创建对象时，给定了父组件。说明要将自己的地址放到
            //父组件的孩子列表中
            parent->child.push_back(this);
        }
        cout<<"object constructor"<<endl;
    }

    virtual ~Object()
    {
        //自动类型推导
        cout<<"object destructor"<<endl;
        for(auto p = child.begin();p!=child.end();p++)
        {
            delete *p;
        }
    }
};

class A:public Object
{
public:
    A(Object* parent = nullptr)
    {
        if (parent!=nullptr) {
            //创建对象时，给定了父组件。说明要将自己的地址放到
            //父组件的孩子列表中
            parent->child.push_back(this);
        }
    }

    virtual ~A()
    {
        cout<<"A::destructor"<<endl;
    }
};


class B:public Object
{
public:
    B(Object* parent = nullptr)
    {
        if (parent!=nullptr) {
            //创建对象时，给定了父组件。说明要将自己的地址放到
            //父组件的孩子列表中
            parent->child.push_back(this);
        }
    }

    virtual ~B()
    {
        cout<<"B::destructor"<<endl;
    }
};

int main()
{
    A w;
    B *btn = new B(&w);  //没有手动delete，但是已经释放
    return 0;
}
