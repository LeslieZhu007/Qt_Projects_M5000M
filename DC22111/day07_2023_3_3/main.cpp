#include <iostream>
#include <string>
using namespace std;




int main()
{
    /******string容器*******/
    /*************string构造函数*************/
    string s1; //string()
    string s2("hello"); //string(const char *s)
    string s3(s2);  // string(const string& str);
    string s4(4,'x'); //string(int n,char c);
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;
    cout<<s4<<endl;
    cout<<"--------------------------"<<endl;
     /*************string赋值*************/
    string s5;
    s5 = "hey man";
    cout<<s5<<endl;
    string s6;
    s6 = s5;
    cout<<s6<<endl;
    string s7;
    s7 = 'x';
    cout<<s7<<endl;
  cout<<"--------------------------"<<endl;
    /*************string成员函数 assign*************/
    string s8;
    s8.assign("hello C++");
    cout<<s8<<endl;
    string s9;
    s9.assign("hello C++",4);
    cout<<s9<<endl;
    string s10;
    s10.assign(s5);
    cout<<s10<<endl;
    string s11;
    s11.assign(10,'w');
    cout<<s11<<endl;
  cout<<"--------------------------"<<endl;
    /*************string字符串拼接*************/
    string s12 = "hey";
    s12+="man";
    s12+=':';
    cout<<s12<<endl;

    string s13 = "weather";
    s13+=s12;
    cout<<s13<<endl;


    string s14 = "I";
    s14.append(" like");
    cout<<s14<<endl;
    s14.append("game:abcd",5);
    cout<<s14<<endl;


    s14.append(s13);
    cout<<s14<<endl;

    s14.append(s4,0,3);
    cout<<s14<<endl;

    cout<<"--------------------------"<<endl;
    /*************string字符串查找*************/
    int pos = s14.find("wea");
    cout<<"pos="<<pos<<endl;  //从左---->右找
    int pos1 = s14.rfind("wea");   //从左---->右找  最后一次出现的位置
    cout<<"pos1="<<pos1<<endl;

    string s15 = "abcdefgh";
    s15.replace(1,3,"1111");
    cout<<"s15="<<s15<<endl;
    cout<<"--------------------------"<<endl;
     /*************string插入删除*************/
    string s16="hello";
    s16.insert(1,"1111");
    cout<<"s16="<<s16<<endl;
    s16.erase(1,3);
    cout<<"s16="<<s16<<endl;
    /*************string字串*************/
    string s17 = "abcdef";
    string substr = s17.substr(1,3);
    cout<<"substr="<<substr<<endl;

    string email = "zhangsan@sina.com";
    int pos2 = email.find("@");
    string username = email.substr(0,pos2);
    email.replace(0,pos2,"lisi");
    cout<<"email="<<email<<endl;

    return 0;
}
