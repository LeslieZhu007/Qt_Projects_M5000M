#include <iostream>

using namespace std;
/*
int MyDiv1(int m,int n)
{
    if(n == 0)
    {
        return -1;
    } else
    {
        return m/n;
    }


}

void test1()
{
    int num = MyDiv1(10,-10);
    if(num == -1)
    {
        cout << "Error: divider is 0" << endl;
    } else
    {
        cout << num << endl;
    }
}

//异常处理机制的简单使用
void test2()
{
    cout << "11111111111111111" << endl;

    try {
        cout <<"hello world"<<endl;

        throw 10.345f;
        cout<<"nihao beijing"<<endl;
    }  catch (float &e) {
        cout<< "111welcome to hqyj:" <<e<<endl;
    } catch(int &e)
    {
        cout<<"222welcome to hqyj:" <<e<<endl;
    }
    cout << "22222222222222222" << endl;
}

int MyDiv2(int m,int n)
{
    if(n==0)
    {
        throw -1;
    } else
    {
        return m/n;
    }
}


void test3()
{
    int a = 10,b = 0;
    int num;
    try {
        num = MyDiv2(a,b);
        cout<<a<<"/"<<b<<"="<<num<<endl;
    }  catch (int &e) {
        cout<<"error,dividor is 0"<<endl;
    }
}
*/


/*
 *  编写函数，获取数组指定元素的内容
 */

int getArray(int *a,int len,int n)
{
    if((n < 0 )|| (n > len - 1))
    {
        throw 0;
    } else
    {
        return a[n];
    }
}

void test4()
{
    int arr[] = {100,20,5,33,89,66,91,73,52};
    int num;
    try {
        num = getArray(arr,sizeof(arr)/sizeof(int),20);
        cout << num << endl;
    }  catch (int &e) {
        if(e==0)
        {
            cout<<"array index out of bounds"<<endl;
        }
    }
}


int main()
{
    cout << "Hello World!" << endl;
    //test1();
    //test2();
    //test3();
    test4();
    return 0;
}
