#include <iostream>
#include <vector>
#include<string>
#include<cstring>
#include <algorithm> //保存大多数算法
#include <numeric> //保存少量算法
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
public:
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
    Person(string name,int score)
        :name(name),score(score)
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
string子串
string substr(int pos = 0, int n = npos) const;//返回由pos开始的n个字符组成的字符串
#endif


void test6()
{
    string s1("abcd123efg12hijkl123mn");
    cout<<s1.find("123",0)<<endl;
    cout<<s1.find("123",5)<<endl;
    cout<<s1.find("123",5,2)<<endl;

    cout<<s1.rfind("123",1)<<endl;
    cout<<s1.rfind("123",9)<<endl;
    cout<<s1.rfind("123",20)<<endl;

    s1.replace(4,3,"666666");
    cout<<s1<<endl;

    string s2 = s1.substr(4,6);
    cout<<s2<<endl;
}

#if 0
strtok:字符串切割
#include <string.h>
char *strtok(char *str, const char *delim);
功能：字符串切割
参数：
    str：当前要切割的字符串
    delim：根据指定的字符串进行切割
返回值：
    成功：切割出来的字符串
    失败：NULL
    切割完毕也返回NULL
#endif

void test7()
{
    char str[] = "asd:fahl:kjsd:hfak:shdj";
    char *p = strtok(str,":");
    cout<<p<<endl;
    while ((p =strtok(NULL,":"))!=NULL) {
        cout<<p<<endl;
    }
}

//利用string的成员函数实现strtok函数的功能，字符串切割
void test8()
{
        string str("asd:fa4356hl:kjqwerwesd:hfadfak:shdj");
        cout << str << endl;
        int pos;
        int n=0;
        string s;
        pos = str.find(":",n);
        s=str.substr(n,pos);
        cout<<s<<endl;
        while (1) {
            n = pos + 1;
            //未发现返回-1
            pos = str.find(":",pos+1);
            if(pos == -1)
            {
                   break;
            }
            s=str.substr(n,pos-n);
            cout<<s<<endl;
        }

        s = str.substr(n,str.size()-n);
         cout<<s<<endl;
}

#if 0
string插入和删除操作
string& insert(int pos, const char* s); //插入字符串
string& insert(int pos, const string& str); //插入字符串
string& insert(int pos, int n, char c);//在指定位置插入n个字符c
string& erase(int pos, int n = npos);//删除从Pos开始的n个字符

string和c-style字符串转换
//string 转 char*
string str = "itcast";
const char* cstr = str.c_str();
//char* 转 string
char* s = "itcast";
string str(s);
#endif

void test9()
{
     string s1("nihao beijing");
     s1.insert(2,"666666") ;
     cout<<"s1 ="<<s1<<endl;
     s1.erase(2,6);
     cout<<"s1 ="<<s1<<endl;
}

//string开辟空间问题
//如果string类实例化的对象前期赋值不超过15个字节，
//默认最大存放的字符串的长度为15个字节，所以如果赋值超过
//15个字节，会释放原来的空间，开辟新的空间，
//所以不要事先保存string的地址，因为有可能操作的地址已经
//不再是当前对象的了，所以最好实时保存
void test10()
{
        string s1("hello world");
        cout<<"capacity: "<<s1.capacity()<<endl;
        printf("%p\n",&s1[0]);

        cout<<s1<<endl;
        s1[3] = '6';
        s1[8] = '9';
        cout<<s1<<endl;

        char &a = s1[3];
        char &b = s1[8];
        cout<<a<<", "<<b<<endl;
        a = '2';
        b = '8';
        cout<<s1<<endl;
        cout<<"**************************"<<endl;

        s1 = "nihao beijing";
        cout<<"capacity: "<<s1.capacity()<<endl;
        printf("%p\n", &s1[0]);
        cout << s1 << endl;
        cout << a << ", " << b << endl;
        a = '2';
        b = '8';
        cout << s1 << endl;
        cout << a << ", " << b << endl;

        cout<<"**************************"<<endl;


        s1 = "asdfasdfsdfgasjkldfhasjdhfkagsdhasd";
         cout << "capacity" << s1.capacity() << endl;
         printf("%p\n", &s1[0]);
         cout << s1 << endl;
         cout << a << ", " << b << endl;
         a = '2';
         b = '8';
         cout << s1 << endl;
         cout << a << ", " << b << endl;
}


//vector容器的未雨绸缪机制
//vector当空间容量不够用时，会开辟新的空间，将原本空间的内容拷贝到
//新的空间，然后将原来的空间释放，如果每次都这样做，效率比较低，所以
//vector开辟新空间时，会多预留出来一部分，这样做就不会多次开辟空间了
void test11()
{
    vector<int> v;
    for(int i = 0; i < 30; i++)
    {
        v.push_back(i);
        cout<<"capacity:" <<v.capacity()<<",actual size:"<<v.size()<<endl;
    }
}

#if 0
 vector常用API操作
 vector构造函数
 vector<T> v; //采用模板实现类实现，默认构造函数
 vector(v.begin(), v.end());//将v[begin(), end())区间中的元素拷贝给本身。
 vector(n, elem);//构造函数将n个elem拷贝给本身。
vector(const vector &vec);//拷贝构造函数。

//例子 使用第二个构造函数 我们可以...
int arr[] = {2,3,4,1,9};
vector<int> v1(arr,arr+sizeof(arr)/sizeof(int))

vector常用赋值操作
assign(beg, end);//将[beg, end)区间中的数据拷贝赋值给本身。
vector& operator=(const vector  &vec);//重载等号操作符
swap(vec);// 将vec与本身的元素互换。
#endif


void test12()
{
    int arr[] = {100, 200, 300, 400, 500, 600};
    vector<int> v(arr,arr+4);
     for(vector<int>::iterator it=v.begin();it<v.end();it++)
     {
            cout<<*it<<" ";
     }
     cout<<endl;


     vector<int> v1;
     v1.assign(v.begin(),v.end());
     for(vector<int>::iterator it=v1.begin();it<v1.end();it++)
     {
            cout<<*it<<" ";
     }
    cout<<endl;

    v1.assign(10,666);
    for(vector<int>::iterator it=v1.begin();it<v1.end();it++)
    {
           cout<<*it<<" ";
    }
   cout<<endl;
   cout << "v: capacity=" << v.capacity() << ",actual size=" << v.size() << endl;
   cout << "v1: capacity=" << v1.capacity() << ",actual size=" << v1.size() << endl;

   v1.swap(v);

   for(vector<int>::iterator it=v.begin();it<v.end();it++)
   {
          cout<<*it<<" ";
   }
  cout<<endl;

   for(vector<int>::iterator it=v1.begin();it<v1.end();it++)
   {
          cout<<*it<<" ";
   }
  cout<<endl;
  cout << "v: capacity=" << v.capacity() << ",actual size=" << v.size() << endl;
  cout << "v1: capacity=" << v1.capacity() << ",actual size=" << v1.size() << endl;
}

#if 0
vectorsize();//返回容器中元素的个数
empty();//判断容器是否为空大小操作
resize(int num);//重新指定容器的长度为num，若容器变长，则以默认值填充新位置。如果容器变短，则末尾超出容器长度的元素被删除。
resize(int num, elem);//重新指定容器的长度为num，若容器变长，则以elem值填充新位置。如果容器变短，则末尾超出容器长>度的元素被删除。
capacity();//容器的容量
reserve(int len);//容器预留len个元素长度，预留位置不初始化，元素不可访问。
vector数据存取操作
at(int idx); //返回索引idx所指的数据，如果idx越界，抛出out_of_range异常。
operator[];//返回索引idx所指的数据，越界时，运行直接报错
front();//返回容器中第一个数据元素
back();//返回容器中最后一个数据元素
#endif

void printVector(vector<int> v)
{
    for(vector<int>::iterator it = v.begin();it<v.end();it++)
    {
            cout<<*it<<" ";
    }
    cout<<endl;
}

void test13()
{
      int arr[] = {100, 200, 300, 400, 500, 600};
      vector<int> v(arr, arr+6);
      printVector(v);

      cout << "first element:  " << v.front()<< endl;
      cout << "last element:   " << v.back() << endl;

      cout << v[0] << endl;
       //at函数内部有异常处理机制
      try {
          cout << v.at(13) << endl;
      }  catch (exception &e) {
          cout<<e.what()<<endl;
      }

      cout << "*************" << endl;

      cout << "v: volume =" << v.capacity() << ",actual size =" << v.size() << endl;

      //resize的使用
     //如果设置的值大于原本的容量，则容量和实际使用都会改变，并且将多与实际使用的位置填0
     //如果设置的值小于原本的容量，则容量不变，实际使用的变为设置的值，其他位置的值会移除
//      v.resize(10);
//      cout << "v: volume =" << v.capacity() << ",actual size =" << v.size() << endl;
//      printVector(v);


//      v.resize(4);
//      cout << "v: volume =" << v.capacity() << ",actual size =" << v.size() << endl;
//      printVector(v);

      //reserve的使用
     //如果设置的值大于原本的容量，则容量改变，但是实际使用不变
     //如果设置的值小于原本的容量，则容量和实际使用都不变
//    v.reserve(10);
//    cout << "v: volume =" << v.capacity() << ",actual size =" << v.size() << endl;
//     printVector(v);

       v.reserve(4);
       cout << "v: volume =" << v.capacity() << ",actual size =" << v.size() << endl;
       printVector(v);
}

#if 0
vector插入和删除操作
insert(const_iterator pos, int count,ele);//迭代器指向位置pos插入count个元素ele.
push_back(ele); //尾部插入元素ele
pop_back();//删除最后一个元素
erase(const_iterator start, const_iterator end);//删除迭代器从start到end之间的元素
erase(const_iterator pos);//删除迭代器指向的元素
clear();//删除容器中所有元素
#endif

void test14()
{
    int arr[] = {100, 200, 300, 400, 500, 600};
    vector<int> v(arr, arr+6);
    printVector(v);

    v.insert(v.begin()+2,3,333);
    printVector(v);

    v.erase(v.begin()+2,v.begin()+5);
    printVector(v);

}

//容器内容获取算法和排序算法
void printVectorInt(int val)
{
    cout << val << " ";
}

#if 0
for_each内部实现：
template<class InputIterator, class Function>
   Function for_each(InputIterator first, InputIterator last, Function fn)
 {
   while (first!=last) {
     fn (*first);
     ++first;
   }
   return fn;      // or, since C++11: return move(fn);
 }
template <class InputIterator, class Function>
Function for_each (InputIterator first, InputIterator last, Function fn);
功能：获取容器中的元素
参数：
    first：起始迭代器
    last：结束迭代器
    fn：回调函数，for_each函数会将每一个元素传递给回调函数，没传一次，回调函数调用一次
#endif


void test15()
{
    vector<int> v;
    v.push_back(100);
    v.push_back(500);
    v.push_back(600);
    v.push_back(200);
    v.push_back(800);
    v.push_back(700);
    v.push_back(300);
    v.push_back(400);
    for_each(v.begin(),v.end(),printVectorInt);
    cout<<endl;

    //排序算法
    //sort是一个全局函数
    //默认按照从小到大的顺序排列
    //sort(v.begin(), v.end());
    //也可以自己设置策略来排序
    //sort(v.begin(), v.end(), greater<int>());
    sort(v.begin(),v.end(),less<int>());
    for_each(v.begin(),v.end(),printVectorInt);
    cout << endl;


}


void printVectorPerson(Person obj)
{
        cout<<obj.name<<", "<<obj.score<<endl;
}
//编写策略
bool myCompare(Person obj1,Person obj2)
{
        return obj1.score < obj2.score;
}


void test16()
{
    vector<Person> v;
    v.push_back(Person("jack",78));
    v.push_back(Person("rose",68));
    v.push_back(Person("kate",99));
    for_each(v.begin(),v.end(),printVectorPerson);

    //sort函数默认只能排序数值型数据，如果要排序类的对象，需要自己编写策略
    sort(v.begin(),v.end(),myCompare);
    for_each(v.begin(),v.end(),printVectorPerson);

}

int main()
{
    cout << "Hello World!" << endl;
    //test1();
    //test2();
    //test3();
    //test4();
    //test5();
    //test6();
   // test7();
   // test8();
    //test9();
   // test10();
   // test11();
    //test12();
    //test13();
   // test14();
    //test15();
    test16();
    return 0;
}
