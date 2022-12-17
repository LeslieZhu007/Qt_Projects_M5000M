#include <iostream>
#include <vector>
#include<string>
using namespace std;

//vector容器简单操作
void test1()
{
    //实例化一个vector的对象，创建一个vector容器
    //vector容器本质是一个类模板，
    //所以实例化对象的时候需要显式调用并指定数据类型
    vector<int> v;
    //调用方法插入数据
    v.push_back(100);
     v.push_back(200);
     v.push_back(300);
     v.push_back(400);
     v.push_back(500);
     v.push_back(600);
     //输出元素
     //如果要操作每一个元素，想到要使用迭代器
     //定义一个vector容器的迭代器
     vector<int>::iterator it;
     //将迭代器可以当做是一个保存元素的地址来操作
      for(it=v.begin();it<v.end();it++)
      {
          cout<<*it<<" "<<endl;
      }
      cout<<endl;

}

class Person
{
private:
    int id;
    string name;
    string sex;
    int score;
public:
    Person(){}
    Person(int id,string name,string sex,int score)
        :id(id),name(name),sex(sex),score(score)
    {

    }

    void printMsg()
    {
        cout<<this->id<<", ";
        cout<<this->name<<", ";
        cout<<this->sex<<", ";
        cout<<this->score<<endl;
    }
};

void test2()
{
    vector<Person> person_vector;
    Person p1 = Person(1,"jack","female",99);
    Person p2 (2,"kate","female",98);
    Person *p3 =new Person (2,"kate","female",98);
    person_vector.push_back(p1);
    person_vector.push_back(p2);
    person_vector.push_back(*p3);
    vector<Person>::iterator it;
    for(it=person_vector.begin();it<person_vector.end();it++)
    {
          it->printMsg();
    }
}


/*
 * string类
 */
#if 0
string构造函数
string();  //创建一个空的字符串 例如: string str;
string(const string& str);  //使用一个string对象初始化另一个string对象
string(const char* s); //使用字符串s初始化
string(int n,char c);  //使用n个字符c初始化
#endif

void test3()
{
    //创建一个string容器
    string s1("hello world");
    cout<<s1<<endl;

    string s2(s1);
    cout<<s2<<endl;

    string s3 = s1;
    cout<<s3<<endl;

    string s4(10,'w');
    cout<<s4<<endl;
}
#if 0
string基本赋值操作
string& operator=(const char* s);//char*类型字符串 赋值给当前的字符串
string& operator=(const string &s);//把字符串s赋给当前的字符串
string& operator=(char c);//字符赋值给当前的字符串
string& assign(const char *s);//把字符串s赋给当前的字符串
string& assign(const char *s, int n);//把字符串s的前n个字符赋给当前的字符串
string& assign(const string &s);//把字符串s赋给当前字符串
string& assign(int n, char c);//用n个字符c赋给当前字符串
string& assign(const string &s, int start, int n);//将s从start开始n个字符赋值给字符串

#endif

void test4()
{
    string s1;

    s1="nihao beijing";
    cout<<"s1="<<s1<<endl;

    string s2;
    s2=s1;
    cout<<"s2="<<s2<<endl;

    string s3;
    s3 = 'p';
    cout<<"s3="<<s3<<endl;

    string s4;
    s4.assign("hey man");
    cout<<"s4="<<s4<<endl;

    string s5;
    s5.assign("hey man",3);
    cout<<"s5="<<s5<<endl;

    string s6;
    s6.assign(s5);
    cout<<"s6="<<s6<<endl;

    string s7;
    s7.assign("go to school",0,2);
    cout<<"s7="<<s7<<endl;
}

#if 0
string存取字符操作
char& operator[](int n);//通过[]方式取字符
char& at(int n);//通过at方法获取字符

string& operator+=(const string& str);//重载+=操作符
string& operator+=(const char* str);//重载+=操作符
string& operator+=(const char c);//重载+=操作符

string& append(const char *s);//把字符串s连接到当前字符串结尾
string& append(const char *s, int n);//把字符串s的前n个字符连接到当前字符串结尾
string& append(const string &s);//同operator+=()
string& append(const string &s, int pos, int n);//把字符串s中从pos开始的n个字符连接到当前字符串结尾
string& append(int n, char c);//在当前字符串结尾添加n个字符c
#endif

void test5()
{
    string s1("hello world");
    //[]运算符重载函数和at函数都是用于获取一个字符，
    //但是at函数内部有异常处理机制，越界操作会抛出异常，
    //而[]运算符重载函数则不会
    //cout<<s1[100]<<endl;
    try {
        //cout<<s1.at(20)<<endl;
        cout<<s1.at(4)<<endl;
    }  catch (exception &e) {
        cout<<e.what()<<endl;
    }

    s1=s1+" jack";
    cout<<s1<<endl;

    s1+=" kate";
    cout<<s1<<endl;


    string s2;
    s2.append(s1,0,11);
    cout<<"s2="<<s2<<endl;
}
#if 0
int find(const string& str, int pos = 0) const; //查找str第一次出现位置,从pos开始查找
int find(const char* s, int pos = 0) const;  //查找s第一次出现位置,从pos开始查找
int find(const char* s, int pos, int n) const;  //从pos位置查找s的前n个字符第一次位置
int find(const char c, int pos = 0) const;  //查找字符c第一次出现位置
int rfind(const string& str, int pos = npos) const;//查找str最后一次位置,从pos开始查找
int rfind(const char* s, int pos = npos) const;//查找s最后一次出现位置,从pos开始查找
int rfind(const char* s, int pos, int n) const;//从pos查找s的前n个字符最后一次位置
int rfind(const char c, int pos = 0) const; //查找字符c最后一次出现位置
string& replace(int pos, int n, const string& str); //替换从pos开始n个字符为字符串str
string& replace(int pos, int n, const char* s); //替换从pos开始的n个字符为字符串s


string比较操作
/*
compare函数在>时返回 1，<时返回 -1，==时返回 0。
比较区分大小写，比较时参考字典顺序，排越前面的越小。
大写的A比小写的a小。
*/
int compare(const string &s) const;//与字符串s比较
int compare(const char *s) const;//与字符串s比较







#endif


void test6()
{

}

int main()
{
    cout << "Hello World!" << endl;
    //test1();
    //test2();
    //test3();
    //test4();
    //test5();
    test6();
    return 0;
}
