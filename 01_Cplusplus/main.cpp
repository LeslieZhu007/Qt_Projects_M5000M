#include <iostream>
#include <myclass.h>
using namespace std;

void test01()
{
        Myclass m1;
         Myclass m2;

         cout<<__LINE__<<" line obj numbers:"<<Myclass::num<<endl;

         {
             //代码块：拥有独立的空间，执行结束后空间释放，
                 //代码块前面的程序的数据可以在内部操作
              Myclass m3;
              Myclass m4;

              cout<<__LINE__<<" line obj numbers:"<<Myclass::num<<endl;
         }

         cout<<__LINE__<<" line obj numbers:"<<Myclass::num<<endl;

        Myclass m5 = m1;


        cout<<__LINE__<<" line obj numbers:"<<Myclass::num<<endl;

}


void test02()
{



}

int main()
{

/*
    test01();
    cout << __LINE__ << " line obj numbers:" << Myclass::num << endl;
   Myclass m6;
   Myclass m7;
   cout << __LINE__ << " line obj numbers:" << Myclass::num << endl;
   */



 cout << "Hello World!" << endl;
    return 0;
}
