#include <stdio.h>
#include "linklist.h"


int main()
{
    //testLinkList();
    //调用创建链表
    LinkList L= list_create();
    if(NULL == L)
    {
        return -1;
    }
    int judege = list_empty(L);

    //判空
    if(1 == judege)
    {
        printf("The newly created one-way linked list is empty\n");
    }

    //头插
     list_insert_head(L,'A');
     list_insert_head(L,'B');
     list_insert_head(L,'C');
     list_insert_head(L,'D');

     //打印
     list_show(L);

     //尾插
     list_insert_tail(L,'E');
     list_insert_tail(L,'F');
     list_insert_tail(L,'G');

     //打印
     list_show(L);

     //任意位置插
     list_insert_pos(L,3,'H');


     //打印
      list_show(L);



    return 0;
}
