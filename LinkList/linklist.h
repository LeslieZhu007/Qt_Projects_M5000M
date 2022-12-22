#ifndef __LINKLIST_H__
#define __LINKLIST_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char datatype ;
typedef struct Node
{
    union
    {
        int len;
        datatype data;
    };
    struct Node *next;
} *LinkList,Node;
void testLinkList();

//创建头节点
LinkList list_create();

//遍历
void list_show(LinkList L);

//判空
int list_empty(LinkList L);

//创建节点
LinkList create_node(datatype e);

//返回对应位置节点
LinkList list_search_pos(LinkList L,int pos);

//尾插
int list_insert_tail(LinkList L,datatype e);

//头插
int list_insert_head(LinkList L,datatype e);


//任意位置插
int list_insert_pos(LinkList L,int pos,datatype e);





#endif // LINKLIST_H
