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

    /* 4
     *  unsigned int a = 6;
         int b = -20;
     */

    /* 4
     *  short a = 6;
         short b = -20;
     */
    /* 4
     *  char a = 6;
         short b = -20;
     */

    /* 4
     *  char a = 6;
         char b = -20;
     */

    /* 4
     *  unsigned int a = 6;
         char b = -20;
     */

     unsigned short a = 6;
        short b = -20;


        (a+b > 6)?puts(">6"):puts("<6");
        cout<<(a+b);
        printf("sizeof unsigned short=%ld\n",sizeof(unsigned short)); //2
        printf("sizeof a+b=%ld\n",sizeof(a+b)); //4
        printf("sizeof  short=%ld\n",sizeof(short)); //2
        return 0;


    return 0;
}
