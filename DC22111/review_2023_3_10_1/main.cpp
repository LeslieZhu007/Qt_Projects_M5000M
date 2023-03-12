#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>//用到的算法都在此头文件中

class Person
{
    public:
    string name;
    int age;
    Person(string n,int a):name(n),age(a){}
};


//STL
void print(int val) {cout<<val<<endl;}//定义仿函数


void test01()
{
    vector<int> v1;//定义单端容器v
       v1.push_back(1);
       v1.push_back(4);
       v1.push_back(8);
       v1.push_back(9);
       for (int i : v1 ) {
           cout<<i<<endl;
       }

       //第二种遍历方式
           vector<int>::iterator it = v1.begin();//将容器的首地址赋给迭代器对象
           while(it != v1.end())
               cout<<*it++<<endl;//先取*it的值，再指针后移一个单位

           //第三种遍历方式
             for(vector<int>::iterator it = v1.begin();it != v1.end();it++)
                 cout<<*it<<endl;

             cout<<"-------------------------------------------"<<endl;
           //第四种遍历方式 for_each
             //void print(int val) {cout<<val<<endl;}//定义仿函数
             for_each(v1.begin(),v1.end(),print);
}

void test02()
{
    Person p1("zhang",14);
    Person p2("zhao",24);
    vector<Person> v1;
    v1.push_back(p1);
    v1.push_back(p2);
    for(vector<Person>::iterator it = v1.begin();it != v1.end();it++)
           cout<<"name:"<<(*it).name<<'\t'<<"age:"<<it->age<<endl;
       cout<<"---------------------------------------"<<endl;
       vector<Person*> v2;
       v2.push_back(&p1);
       v2.push_back(&p2);
       for(vector<Person*>::iterator it = v2.begin();it != v2.end();it++)
           cout<<"name:"<<(*it)->name<<'\t'<<"age:"<<(*it)->age<<endl;



}


void test03()
{
    vector<vector <int>> v;
       vector<int> v1 = {1,2,5};//C++11才允许的操作
       vector<int> v2 = {9,8,6};
       v.push_back(v1);
       v.push_back(v2);
       for(vector<vector<int>>::iterator it = v.begin();it != v.end();it++)
       {
           for(vector<int>::iterator sit = (*it).begin();sit != (*it).end();sit++)
           {
               cout<<*sit<<" ";
           }
           cout<<endl;
       }
}

void test04()
{
    string s1;//无参构造
        string s2("helloworld");//有参构造
        string s3(s2);//拷贝构造
        string s4(10,'a'); //使用10个字符a初始化
        cout<<"s2 = "<<s2<<endl<<"s3 = "<<s3<<endl<<"s4 = "<<s4<<endl;
}


void test05()
{
    /*
     * string& operator=(const char* s);//char*类型字符串赋值给当前的字符串
        string& operator=(const string& s);//把字符串s赋给当前的字符串
        string& operator=(char c);//字符赋给当前的字符串
        string& assign(const char* s);//把字符串s赋给当前的字符串
        string& assign(const char* s,int n);//把字符串s的n个字符赋给当前的字符串
        string& assign(const string& s);//把字符串s赋给当前字符串
        string& assign(int n,char c);//用n个字符c赋值给当前字符串
     */
       string s1;
       s1 = "helloworld";
       cout<<"s1:"<<s1<<endl;
       string s2;
       s2 = s1;
       cout<<"s2:"<<s2<<endl;
       string s3;
       s3 = 'a';
       cout<<"s3:"<<s3<<endl;
       string s4;
       s4.assign("hello C++");
       cout<<"s4:"<<s4<<endl;
       string s5;
       s5.assign("hello C++",5);
       cout<<"s5:"<<s5<<endl;
       string s6;
       s6.assign(s5);
       cout<<"s6:"<<s6<<endl;
       string s7;
       s7.assign(10,'w');
       cout<<"s7:"<<s7<<endl;
}


void test06()
{
    /*
     * string& operator+=(const char* str);
string& operator+=(const char c);
string& operator+=(const string& str);
string& append(const char* s);//把字符串s连接到当前字符串结尾
string& append(const char* s,int n);//把字符串s的前n个字符连接到当前字符串结尾
string& append(const string& s);//同operator+=(const string& str);
string& append(const string& s,int pos,int n);//字符串s中从pos开始的n个字符连接到字符串结尾。
     *
     */

    string s1 = "我";
       s1+="爱玩游戏";//拼接字符串
       cout<<"s1:"<<s1<<endl;
       s1 +=':';//拼接字符
       cout<<"s1:"<<s1<<endl;
       string s2 = "LOL DNF";
       s1+=s2;//拼接字符对象
       cout<<"s1:"<<s1<<endl;

       string s3 = "I";
       s3.append("love");
       cout<<"s3:"<<s3<<endl;
       s3.append("game: abcd",5);
       cout<<"s3:"<<s3<<endl;
       s3.append(s2);
       cout<<"s3:"<<s3<<endl;
       s3.append(s2,4,3);
       cout<<"s3:"<<s3<<endl;

}


void test07()
{
    /*
     * int find(const string& str,int pos = 0)const;//查找str第一次出现的位置，从pos开始查找
int find(const char* s,int pos = 0)const;//查找s第一次出现位置，从pos开始查找
int find(const char* s,int pos,int n)const;//从pos位置查找s的前n个字符第一次位置
int find(const char c,int pos = 0)const;//查找字符c第一次出现位置
int rfind(const string& str,int pos = npos)const;//查找str最后一次位置，从pos开始查找
int rfind(const char* s,int pos = npos)const;//查找s最后一次出现位置，从pos开始查找
int rfind(const char* s,int pos,int n)const;//从pos查找s的前n个字符最后一次位置
int rfind(const char c,int pos = 0)const;//查找字符c最后一次出现位置
string& replace(int pos,int n,const string& str);//替换从pos开始n个字符为字符串str
string& replace(int pos,int n,const char* s);//替换从pos开始的n个字符为字符串s
     *
     */

    string s1 = "abcdehijklk";
        int pos = s1.find("de");//从左往右查
        cout<<"pos:"<<pos<<endl;
        int pos1 = s1.rfind("de");//从右往左查
        cout<<"pos1:"<<pos1<<endl;

        string s2 = "abcdefghijklm";
        s2.replace(1,3,"1111");//从1号位置起3个字符替换为“1111”
        cout<<"s2:"<<s2<<endl;
}

void test08()
{
    string s1 = "hello";
        string s2 = "xello";
        if(s1.compare(s2) == 0)
            cout<<"s1等于s2"<<endl;
        else if(s1.compare(s2) > 0)
            cout<<"s1大于s2"<<endl;
        else
            cout<<"s1小于s2"<<endl;
}


void test09()
{
    string s1 = "hello";
      string s2 = "xello";
      if(s1.compare(s2) == 0)
          cout<<"s1 equals s2"<<endl;
      else if(s1.compare(s2) > 0)
          cout<<"s1's greater than s2"<<endl;
      else
          cout<<"s1's less than s2"<<endl;
}

void test10()
{
    string s1 = "abcdef";
      string substr = s1.substr(1,3);
      cout<<substr<<endl;

      string email = "zhangsan@sina.com";//原邮箱
      int pos = email.find("@");//查找
      string usrName = email.substr(0,pos);//截取邮箱可变名称
      email.replace(0,pos,"lisi");//替换截取的邮箱名字
      cout<<email<<endl;
}

void test11()
{
    string s1 = "hello";
       s1.insert(1,"111");
       s1.erase(1,3);
       cout<<s1<<endl;
}

void test12()
{
    string s1 = "hello";
        //通过[]访问单个字符
        for(unsigned int i=0;i<s1.size();i++)
        {
            cout<<s1[i]<<endl;
        }
        //通过[]访问单个字符
        for(unsigned int i=0;i<s1.size();i++)
        {
            cout<<s1.at(i)<<" ";
        }
        s1[0] = 'x';//通过[]访问单个字符
        s1.at(1) = 'x';//通过[]访问单个字符
        cout<<s1<<endl;
        cout<<endl;
}

int main()
{
    test10();

    return 0;
}
