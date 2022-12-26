#ifndef __LINKNODE_H__
#define __LINKNODE_H__


/*
 *使用C++实现有头单链表
 */
#include <iostream>
using namespace std;
typedef int DATATYPE ;

//结点类
class LinkNode
{
    public:
        LinkNode();
        LinkNode(DATATYPE value);
        void setData(DATATYPE value);
        DATATYPE getData();
        void setNext(LinkNode *newnode);
        LinkNode *getNext();
    private:
        DATATYPE data;
        LinkNode *next;
};



#endif // __LINKNODE_H__
