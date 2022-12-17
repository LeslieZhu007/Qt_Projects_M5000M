#include <iostream>

using namespace std;

class Goods
{
public:
    string name;
    int money;
    string date;
    Goods(){};

    Goods(string name,int money,string date)
    {
            this->name = name;
            this->money = money;
            this->date = date;
    }
};

void sumMoney(Goods &obj1,Goods&obj2)
{
    int sum = obj1.money + obj2.money;
    cout<<"一共话费"<<sum<<"元" << endl;
}

//+ -运算符的重载
int operator+(Goods &obj1,Goods &obj2)
{
    int sum = obj1.money + obj2.money;
    cout<<"一共话费" <<sum<<"元"<<endl ;
    return sum;
}

int operator-(Goods &obj1,Goods &obj2)
{
    int sub = obj1.money - obj2.money;
    cout<<"价格差值为" <<sub<<"元"<<endl ;
    return sub;
}

void test1()
{
    Goods phone = Goods("iphone 13", 5999, "2021/9/16");
    Goods computer = Goods("Lenovo", 6888, "2020/12/12");

    int sumGoods = phone + computer;

    int subGoods = phone - computer;





}


int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
