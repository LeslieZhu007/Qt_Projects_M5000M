#include "linklist.h"

void testLinkList()
{
    printf("Testing linklist.......\n");
}


//创建头节点
LinkList list_create()
{
      LinkList L = (LinkList)malloc(sizeof(Node));
      if(NULL == L)
      {
           printf("One-way linked list failed to create\n");
           return NULL;
      }
      //单向链表的初始化
      L->len = 0;
      L->next = NULL;

      printf("One-way linked list creation succeeded\n");
      return L;
}

//遍历
void list_show(LinkList L)
{
    if(NULL == L)
    {
        printf("The linked list passed is illeagal\n");
    }

    LinkList p = L->next;

    while (p !=NULL) {
        printf("%c\t",p->data);
        p = p->next;
    }

    printf("\n");
}


//判空
int list_empty(LinkList L)
{
     return L->next == NULL;
}


//创建节点
LinkList create_node(datatype e)
{
    LinkList node = (LinkList)malloc(sizeof (node));
    if(NULL == node)
    {
        printf("Node creation failed\n");
    }
    node->data = e;
    node->next = NULL;

    return node;
}


//返回对应位置节点
LinkList list_search_pos(LinkList L,int pos)
{
     if(NULL == L || list_empty(L) || pos < 0 || pos > L->len)
     {
           printf("Find the node in pos failed\n");
           return NULL;
     }
     LinkList node = L;
     for(int i = 0;i<pos;i++)
     {
          node = node->next;
     }

     return node;

}

//头插
int list_insert_head(LinkList L,datatype e)
{
    if(NULL == L)
    {
        printf("Head insertion failed\n");
    }
    LinkList p = create_node(e);
    if(NULL == p)
    {
        return -1;
    }
    p->next = L->next;
    L->next = p;

    L->len ++;

    printf("%c Head insertion succeed\n",e);

    return 0;

}


//尾插
int list_insert_tail(LinkList L,datatype e)
{
    if(NULL == L)
    {
        printf("Tail insertion failed\n");
    }
    //找到尾部的位置
    LinkList tail_node = list_search_pos(L,L->len);
    if(NULL == tail_node)
    {
        return -1;
    }
    //构造新节点
    LinkList p = create_node(e);
    if(NULL == p)
    {
        return -1;
    }
    //对尾节点头插
    p->next = tail_node->next;
    tail_node->next = p;

    L->len++;

    printf("%c Tail insertion succeed\n",e);

    return 0;

}



//任意位置插
int list_insert_pos(LinkList L,int pos,datatype e)
{
    //pos < 1 ==> 前插前提为头节点必须存在
    if(NULL == L || pos < 1 || pos > L-> len+1)
    {
        printf("Any position insertion failed\n");
    }
    //找到任意位置的前一个位置，进行前插
    LinkList any_node = list_search_pos(L,pos-1);
    if(NULL == any_node)
    {
        return -1;
    }
    //构造新节点
    LinkList p = create_node(e);
    if(NULL == p)
    {
        return -1;
    }
    //对尾节点头插
    p->next = any_node->next;
   any_node->next = p;

    L->len++;

    printf("%c Any position insertion succeed\n",e);
    return 0;
}
