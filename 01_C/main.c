#include <stdio.h>
#include <stdlib.h>
//#include <malloc.h>

void test01()
{
    //在堆区申请单个内存空间
    //p: 栈区空间 存放地址
    //
    int * p = (int *)malloc(sizeof(int));
    if (p==NULL)
    {
        printf("malloc failed\n");
    }
    *p = 520;
    printf("p=%p\n",p);
    printf("p=%d\n",*p);

    int * p1 = (int *)malloc(sizeof(int));
    *p1 = 1314;
    printf("p1=%p\n",p1);
    printf("p1=%d\n",*p1);


    printf("******************************************\n");

    int *p2 = (int *)malloc(sizeof(int)*5);
    for (size_t i = 0; i < 5; i++)
    {
        printf("p2=%p\n",p2+i);

    }

    for (int i = 0; i < 5; i++)
    {
        printf("p2+%d=%d\n",i,*(p2+i));
    }



/*
    int num; //栈区
    int *p2 = &num; //栈区
*/
}

int * fun()
{
    static int num = 520;
    return &num;
}

int main(int argc, char const *argv[])
{
    int *n = fun();
    printf("*n = %d\n",*n);

    *fun() = 1314;
    printf("*fun() = %d\n",*fun());
    printf("*n = %d\n",*n);
    return 0;
}

