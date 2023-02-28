#include <iostream>
using namespace std;
//类的成员函数作为友元函数
class date;
class time
{
    int hour,minute,seconds;
public:
    time()=default;
    time(int h,int m,int s):hour(h),minute(m),seconds(s){}
    void show(const date& o);


};
class date
{
    int year,month,day;
public:
    date()=default;
    date(int y,int m,int d):year(y),month(m),day(d){}
   // friend void time::show(const date& o);
    friend class time;
};

//注意: time中的show函数需要写在date类的定义之后
//因为如果写在time类中，此前只是多date类进行了声明
//不知道date类中有什么成员,所以在time类中访问date类的
//成员会出错
void time::show(const date& o)
{
    cout<<hour<<":"<<minute<<":"<<seconds<<endl;
    cout<<o.year<<"/"<<o.month<<"/"<<o.day<<endl;
}

class student;
class teacher
{
    string name;
public:
    teacher(string name):name(name){}
    void inspect(const student &s);
};
/**************************************************/
class student
{
    string name;
    int score;
public:
    student(string name,int score):name(name),score(score){}
    //friend void teacher::inspect(const student &s);
    friend class teacher;
};
void teacher::inspect(const student &s)
{
    cout<<"teacher:"<<this->name<<" is checking student:"<<s.name<<" score:"<<s.score<<endl;
}
/**************************************************/
//常成员
class stu
{
    const int age;
    string name;
public:
    //stu()= default; 注意，不需要写无参构造函数，因为有了常成员变量之后
    //定义对象的时候必须进行初始化
    stu(int a,string n):age(a),name(n){}
    void show()
    {
        //age = 10; //age是常成员变量，不能进行修改，且只能在初始化列表中进行初始化
        cout<<"name:"<<name<<'\t'<<"age:"<<age<<endl;
    }
    void show() const
    {
        cout<<"name="<<name<<'\t'<<"age="<<endl;
    }
};

class stu1
{
    mutable int age;
    string name;
public:
    //stu()= default; 注意，不需要写无参构造函数，因为有了常成员变量之后
    //定义对象的时候必须进行初始化
    stu1(int a,string n):age(a),name(n){}
    void show()  //show(stu *const this)  //==>指针常量
    {
        //age = 10; //age是常成员变量，不能进行修改，且只能在初始化列表中进行初始化
        cout<<"name:"<<name<<'\t'<<"age:"<<age<<endl;
    }
    void show() const  // show(stu const * this) ==> 常量指针
    {
        age = 10;   //如果没有mutable关键字，无法对本类数据成员进行修改
        cout<<"name="<<name<<'\t'<<"age="<<age<<endl;
    }
};

/**************************************************/
//常对象     const 类名 对象名  或者  类名 const 对象名


int main_1()
{
    time t(9,29,56);
    date d(2023,2,28);
    t.show(d);
    cout << "*****************" << endl;
    teacher t1("jack");
    student s("tom",98);
    t1.inspect(s);
     cout << "*****************" << endl;
     stu s1(18,"jack"); //在定义对象的时候必须给常成员变量进行初始化
     s1.show();

     cout << "*****************" << endl;

      stu1 s2(18,"jack");
      s2.show();

      cout << "*****************" << endl;

      const stu1 s3(2,"rose");
      stu1 const s4(s3);
      s3.show(); //常对象只能调用常成员函数
      s4.show();

    return 0;
}
