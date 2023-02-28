#include<iostream>
using namespace std;

int sum(const int &a1,const int &b1)
{
    return a1+b1;
}

struct stu
{
    int age;
    int &score=age; //结构体中的引用可以不初始化，但是在结构体定义变量的时候要进行初始化
};

void test01()
{
    int age = 10;
    //引用在定义的同时必须初始化
    int &ra = age;//给变量age起一个别名叫ra
    int *pa = &age;

    int &raa = age;
    const int &rbb = age;


    //stu s1 = {21,age};  //无匹配构造函数
    //stu *s2 = &s1;
    //cout<<"s1.age="<<s1.age<<",s1.score="<<s1.score<<endl;
    //cout<<"s2.age="<<s2->age<<",s2.score="<<s2->score<<endl;

   // rbb = 12;  常引用不能通过引用来修改目标值，但是可以通过引用目标来修改变量的值
    //通常情况下 常引用用于函数的形参
    cout<<"age:"<<age<<endl;
    cout<<"ra:"<<ra<<endl;
    cout<<"raa:"<<raa<<endl;
    cout<<"&age:"<<&age<<endl;
    cout<<"&ra:"<<&ra<<endl;
    cout<<"&raa:"<<&raa<<endl;

    cout<<"*pa:"<<*pa<<endl;
    cout<<"&pa:"<<&pa<<endl;

    cout<<"sum:"<<sum(1,2)<<endl;
}


void test02()
{
    register int a = 10;
    cout<<"&a="<<&a<<endl;
}




int main()
{

    char name[50] = "zhangsan";
    cout<<"name="<<name<<endl;

    const char *name2 = "zhao"; //常量指针：指针的指向可以改变，但不能通过指针来改变成员的值
    //指针常量: 指针是常量，指针指向的这片空间不能够被改变，不能指向其他的空间
    int a = 10;
    int b = 10;
    const int *pa = &a; //常量指针
    //*pa = 11;错误，只读，不能修改
    int *const ppa = &a; //指针常量
    //ppa = &b; 错误，不能改变指针的指向
    cout<<"*pa = "<<*pa<<endl;
     cout<<"*ppa = "<<*ppa<<endl;
    cout<<"name2="<<name2<<endl;
    cout<<"-------------------------------------"<<endl;
    string name3 = "lisi";
    string name4;
    name4 = "wangwu";
    string name5("jack");
     string name6(5,'k');
    cout<<"name3="<<name3<<endl;
    cout<<"name4="<<name4<<endl;
    cout<<"name5="<<name5<<endl;
    cout<<"name6="<<name6<<endl;
     cout<<"-------------------------------------"<<endl;
     if (name3.empty()) {
         cout<<"name3 is empty"<<endl;
     } else
     {
         cout<<"name.size = "<<name3.size()<<endl;
         for (unsigned int i = 0;i<name3.size() ;i++ ) {
             cout<<name3.at(i);
             cout<<endl;
         }
     }
     if (name3 > name4) {
             cout<<"name3 > name4"<<endl;
     } else {
             cout<<"name3 < name4"<<endl;
    }
     string name7 = name3+name4;
     cout<<"name7="<<name7<<endl;


    /*
     cout<<"------------------------------------------------"<<endl;
     cout<<"input str1:";
     string str1;
     getline(cin,str1);
     cout<<"str1:"<<str1<<endl;

     string str2;
     cout<<"input str2:";
     cin>>str2;
     cout<<"str2:"<<str2<<endl;
     */
   // test01();
    test02();

    return 0;
}
