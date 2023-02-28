#include <iostream>
using namespace std;
#define ADD(x,y) (x+y)
#define MAX(x,y) (x>y?x:y)
struct stu
{
    int age;
    char sex;
    int score;
};

void test01()
{
    //1>单个空间的分配和回收
    //先定义后初始化
    int *p1 = new int;
    *p1 = 18;
    //定义的同时初始化
    int *p2 = new int(19);
    cout<<"*p1:"<<*p1<<endl;
    cout<<"*p2:"<<*p2<<endl;
    delete p1; //释放空间
    delete p2;
    p1=nullptr;
    p2=nullptr;
    cout<<"---------------------------------------------"<<endl;

    //2>连续空间的分配和回收
    int *p3 = new int[3]; //1.先定义后初始化
    p3[0] = 20;
    p3[1] = 21;
    *(p3+2) = 22;
    for (int i = 0; i < 3;i++ ) {
        cout<<"p3["<<i<<"] = "<<p3[i]<<endl;
    }
    delete[] p3;

    int *p4 = new int[3]{4,3,1}; //定义时初始化
    for (int i = 0; i < 3;i++ ) {
        cout<<"p4["<<i<<"] = "<<*(p4+i)<<endl;
    }
     delete[] p4;

    //3>动态结构体空间的分配和回收
    struct stu *p5 = new struct stu; //1.先定义后初始化
    p5->age = 15;
    p5->sex = 'F';
    cout<<"p5->age="<<p5->age<<'\t'<<"p5->sex="<<p5->sex<<endl;
    delete p5;

    //c++中可以省略struct,直接使用结构体名进行操作
    //只适用于c++ 11 c++ 98不支持
    stu *p6 = new stu{16,'M'}; //2.定义的同时初始化
    cout<<"p6->age="<<p6->age<<'\t'<<"p6->sex="<<p6->sex<<endl;
    delete p6;


    //4>动态结构体数组的分配和回收
    stu *p7 = new stu[3]; //先定义后初始化
    p7[0].age = 25;
    p7[0].sex = 'F';

    (p7+1)->age = 26;
    (p7+1)->sex = 'M';

    (p7+2)->age = 27;
    (p7+2)->sex = 'M';

    for (int i = 0;i<3 ;i++ ) {
        cout<<"p7["<<i<<"].age = "<<p7[i].age<<'\t'<<""<<"(p7+"<<i<<")->sex="<<(p7+i)->sex<<endl;
    }

    delete[] p7;

    //定义时初始化
    stu *p8 = new stu[3]{{17,'F'},{18,'M'},{19,'F'}};
    for (int i = 0;i<3 ;i++ ) {
        cout<<"p8["<<i<<"].age = "<<p8[i].age<<'\t'<<""<<"(p8+"<<i<<")->sex="<<(p8+i)->sex<<endl;
    }
    delete[] p8;

}


void test02()
{

    stu *s = new stu[5];
    for (int i = 0; i < 5;i++ ) {
        cout<<"请输入第"<<i+1<<"个学生的成绩>>"<<endl;
        cin>>s[i].score;
    }

    //bubble sort
    for (int i = 0;i < 4 ;i++ ) {
        for (int j=0;j<4-i ;j++ ) {
            if (s[j].score> s[j+1].score) { //从小到大
                stu temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }

    for (int i = 0;i<5 ;i++ ) {
        cout<<"s["<<i<<"].score = "<<s[i].score<<endl;
    }
    delete[] s;
}

//函数的重载(function overload)
//重载与返回值无关
int sum(int a=0,int b=0)
{
    return a+b;
}

int sum(int a,int b,int c)
{
    return a+b+c;
}

double sum(double a,double b)
{
    return a+b;
}


void test03()
{
    cout<<"sum:"<<sum(3.2,32.1)<<endl;
    cout<<"sum:"<<sum(1,2)<<endl;
    cout<<"sum:"<<sum(1,2,3)<<endl;
     cout<<"sum:"<<sum()<<endl;
      cout<<"sum:"<<sum(1)<<endl;
}


//内联函数  inline
//编译器建议使用，如果编译器发现函数体大，即使定义了内联，编译器也会弃用
inline int add(int a,int b)
{
    return a+b;
}

void test04()
{
    cout<<"add:"<<add(1,2)<<endl; //会在预处理阶段替换掉内联函数
    cout<<"ADD:"<<add(3,4)<<endl;
}

/********************************************************/
//C++结构体默认是公有的权限
 struct teacher
{
     int age;
     string name;
     void show()
    {
         cout<<"age:"<<age<<'\t'<<"name:"<<name<<endl;
     }

};

void test05()
{
    teacher t1;
    t1.age = 31;
    t1.name = "jack";
    t1.show();
}

struct student
{
    int age;
    string name;
    int score;
};

void print_student(student *s,int size)
{
    for (int i = 0;i<size;i++ ) {
        cout<<"s["<<i<<"].score = "<<s[i].score<<'\t'<<"s["<<i<<"].age = "<<s[i].age<<'\t'<<"s["<<i<<"].name = "<<s[i].name<<endl;
    }
}


void sort(student *s)
{
    for (int i = 0;i < 4 ;i++ ) {
        for (int j=0;j<4-i ;j++ ) {
            if (s[j].score> s[j+1].score) { //从小到大
                student temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
}

void test06()
{
    student *s = new student[3];

    for (int i=0;i < 3 ;i++ ) {
        cout<<"please input no"<<i+1<<" student info(name/age/score):";
        cin>>(s+i)->name>>(s+i)->age>>(s+i)->score;
    }
    sort(s);
    print_student(s,3);
}


/***************类和对象部分************************/
class student1
{
private:
int age;
string name;
public:
void show()
{
    cout<<"age:"<<age<<'\t'<<"name:"<<name<<endl;
}
void set_age()
{
    cout<<"set_age:";
    cin>>age;
}
void set_name()
{
    cout<<"set_name:";
    cin>>name;
}
};


/**************类的内存大小*********************/
class A
{
};

class B
{
    void show()
    {

    }
};
class C
{
int age;
char sex;
};

class D
{
int age;
char sex;
void show()
{
    cout<<"age="<<age<<",sex="<<sex<<endl;
}
};
void test07()
{
     student1 s1;
    s1.set_name();
    s1.set_age ();
    s1.show();
}

void test08()
{
    cout<<"size of A = "<<sizeof(A)<<endl;
    cout<<"size of B = "<<sizeof(B)<<endl;
    cout<<"size of C = "<<sizeof(C)<<endl;
}

//长方体类
class Cuboid
{
public:
    void calculate_volume()
    {
        cout<<"The volume of the cuboid is "<<length*width*high<<endl;
    }
    void set_cuboid(int length,int width,int high)
    {
        this->length = length;
        this->width = width;
        this->high = high;
    }

    int get_length(){return length;}
    int get_width() {return width;}
    int get_high() {return high;}
private:
    int length;
    int width;
    int high;
};

void cuboid_equal(Cuboid& c1,Cuboid& c2)
{
    if(c1.get_high()==c2.get_high() && c1.get_length() == c2.get_length() && c1.get_width() == c2.get_width())
    {
        cout<<"equal"<<endl;
    } else
     {
         cout<<"not equal"<<endl;
     }
}

void test09()
{
    Cuboid c1,c2;
    c1.set_cuboid(1,2,3);
    c2.set_cuboid(4,5,6);
    c1.calculate_volume();
    c2.calculate_volume();
    cuboid_equal(c1,c2);
}

int main()
{
    //test01();
    //test02();
    //test03();
    //test05();
   // test06();
   // test08();
    test09();
    return 0;
}
