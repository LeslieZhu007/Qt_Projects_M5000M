#include <iostream>
#include <fstream>
#include <typeinfo>
using namespace std;

/**************file stream***************/
void test01()
{
    ofstream ofs;
    ofs.open("test.txt",ios::out);
    ofs<<"姓名：张三"<<endl;
    ofs<<"性别：男"<<endl;
    ofs<<"年龄：18"<<endl;
    ofs.close();
}


void test02()
{
    ifstream ifs;
    ifs.open("test.txt",ios::in);
    if (ifs.is_open()) {
        cout<<"file open success!"<<endl;
    }
    char c;
    while ((c=ifs.get())!=EOF) {
        cout<<c;
    }

    ifs.close();
}

void test03()
{
    ifstream ifs;
    ifs.open("test.txt",ios::in);
    if (ifs.is_open()) {
        cout<<"file open success!"<<endl;
    }
    char buf[1024] = {0};
    while (ifs.getline(buf,sizeof(buf))) {
        cout<<buf<<endl;
    }

}

void test04()
{
    ifstream ifs;
    ifs.open("test.txt",ios::in);
    if (ifs.is_open()) {
        cout<<"file open success!"<<endl;
    }
    char buf[1024] = {0};
    while (ifs>>buf) {
        cout<<buf<<endl;
    }

}

void test05()
{
    ifstream ifs;
    ifs.open("test.txt",ios::in);
    if (ifs.is_open()) {
        cout<<"test05:file open success!"<<endl;
    }
    string buf;
    while (getline(ifs,buf)) {
        cout<<buf<<endl;
    }
}



/*****************************************/
class person
{
public:
    char name[64];
    int age;
};

void test06()
{
    ofstream ofs;
    ofs.open("open.txt",ios::out|ios::binary);
    person p1= {"jack",18};
     //person p2{"jack",18}; //定义单个对象的初始化
    ofs.write((const char *)&p1,sizeof(person));
    ofs.close();
}

void test07()
{
    ifstream ifs;
    ifs.open("open.txt",ios::in|ios::binary);
    if (ifs.is_open()) {
        cout<<"file open success"<<endl;
    }
    person p1;
    ifs.read((char *)&p1,sizeof(p1));
    cout<<"name:"<<p1.name<<"\t"<<"age:"<<p1.age<<endl;

    ifs.close();

}

/****************类型转换***********************/
/*
 * static_cast用于内置的数据类型、具有继承关系的指针或者引用
 * dynamic_cast转换具有继承关系的指针或者引用，
 * 在转换前会进行对象类型检查(只能由子类型转换为父类型)
 * const_cast主要针对const的转换
 * reinterpret_cast强制类型转换，用于进行没有任何关联之间的转换。
 * 比如一个字符指针转换为一个整型数
 *
 */
class Building{};
class Animal{};
class Cat:public Animal{};

//static_cast用于内置的数据类型、具有继承关系的指针或者引用
void test08()
{
    int a = 47;
    char c = static_cast<char>(a);
    cout<<c<<endl;

    //基础数据类型指针
//        int * p = NULL;
//        char* sp = static_cast<char*>(p);//出错

    //对象指针
//         Building* building = NULL;
//         Animal* ani = static_cast<Animal*>(building);//出错

     //转换具有继承关系的对象指针
    Animal* pani1 = NULL;
       Cat* pcat1 = static_cast<Cat*>(pani1);//父类指针转换为子类指针

       Cat* pcat2 = NULL;
       Animal* pani2 = static_cast<Animal*>(pcat2);//子类指针转换为父类指针


       Animal ani1;
       Animal& rani1 = ani1;
       Cat& rcat1 = static_cast<Cat&>(rani1);//父类引用转换为子类引用

      Cat cat1;
      Cat& rcat2 = cat1;
      Animal& rani2 = static_cast<Animal&>(rcat2);//子类引用转换为父类引用

}


/*
* dynamic_cast转换具有继承关系的指针或者引用，
* 在转换前会进行对象类型检查(只能由子类型转换为父类型)
*/
void test09()
{
    //基础数据
    //  int a = 10;
    //  char c = dynamic_cast<char>(a);//出错

        //非继承关系的指针
//         Building* pb1 = NULL;
//         Animal* pani1 = dynamic_cast<Animal*>(pb1);//出错

     //具有继承关系指针
//     Animal *pani1 = NULL;
//     Cat* pcat1 = dynamic_cast<Cat*>(pani1);
    Cat*pcat2 = NULL;
    Animal *pani2 = dynamic_cast<Animal *>(pcat2);
    //子类指针可以转换为父类指针(从大到小)，类型安全
        //父类指针转成子类指针(从小到大)，不安全
}

//const_cast主要针对const的转换
void test10()
{
    int a = 10;
    const int &ra = a;
    int &c = const_cast<int &>(ra);//常引用转换为普通引用
    //指针类型
    const int* p1 = NULL;
    int *p2 = const_cast<int *>(p1);  //将const指针转换为普通指针
    int *p3 = NULL;
    const int *p4 = const_cast<int *>(p3);
}

typedef void (*FUNC1)(int,int);
typedef int(* FUNC2)(int,char *) ;


/*
 * reinterpret_cast强制类型转换，
 * 用于进行没有任何关联之间的转换。
 * 比如一个字符指针转换为一个整型数
 */
void test11()
{
    //无关指针类型
    Building *pb1 = NULL;
    Animal *pani1 = reinterpret_cast<Animal*>(pb1);

    //无关指针类型
    FUNC1 func1;
    FUNC2 func2 = reinterpret_cast<FUNC2>(func1);
}


/***********Auto的使用*************/
/*
 * 1) auto变量必须在定义的时候初始化，类似于const。
2)定义一个auto序列的变量必须始终推导为同一个类型。
3)如果初始化表达式是const或者引用的类型，则会除去const或者引用的语义(auto不管&和const的)
4) 如果auto关键字带上&，则不会去除const或者引用的语义。
5) 初始化表达式是数组，auto关键字推导的类型为指针。
6)若初始化表达式是数组且auto带上&，才会推导为数组。
7)auto可以作为函数的返回类型和参数类型。
 */
void test12()
{
    int a = 10;
    auto b = a;
    cout<<typeid (b).name()<<endl;
}
auto max(int x,int y)
{
    return x>y?x:y;
}

void test13()
{
    //auto变量在定义时候必须初始化
      auto a1 = 3;
      auto a2{32};

      //定义一个auto序列的变量必须始终推导为同一个类型
       auto a3 = 1,a4 = 3,a5{43};

       //如果初始化表达式是const或者引用的类型，则会除去const或者引用的语义
          int a6{3};
          auto ra6 = a6;
          cout<<&ra6<<'\t'<<&a6<<endl;
          cout<<typeid (ra6).name()<<endl;
          const int a7 = 12;
          auto a8 = a7;
          a8 = 0;
          cout<<typeid (a8).name()<<endl;

          //如果auto关键字带上&，则不会去除const或者引用的语义
          cout<<"---------------------------------"<<endl;
              int a9 = 10;
              auto& a10 = a9;
              cout<<&a9<<'\t'<<&a10<<endl;
              cout<<"typeid (a10).name()="<<typeid (a10).name()<<endl;
              const int a11 = 20;
              auto& a12 = a11;
              cout<<"typeid (a12).name()="<<typeid (a12).name()<<endl;

              cout<<"---------------------------------"<<endl;
              //初始化表达式是数组，auto关键字推导的类型为指针
                 int a13[3] = {24,1,4};
                 auto a14 = a13;
                 cout<<typeid (a14).name()<<endl;

                 cout<<"--------------------------------------"<<endl;
                 //若初始化表达式是数组且auto带上&，才会推导为数组
                    int a15[] = {324,42,1,7,8,9};
                    auto& a16 = a15;
                    cout<<typeid (a15).name()<<endl;
                    cout<<max(a1,a2)<<endl;

}

//decltype
//在编译时期推导表达式的类型，不用初始化，用法类似于sizeof。
int fun1(){return 10;}
auto fun2(){return 'g';}
void test14()
{
    decltype(fun1())    x;
    cout<<typeid (x).name()<<endl;
    decltype (fun2())   y = fun2();
    cout<<y<<endl;
    cout<<typeid (y).name()<<endl;
}

constexpr int func1(int n)
{
    return n;
}

void test15()
{
    int n = 10;
    const int m = 10;
    constexpr int j = func1(10);

    constexpr int k = func1(m);
    //constexpr int i = func1(n);
}

int main()
{
       test14();

    return 0;
}
