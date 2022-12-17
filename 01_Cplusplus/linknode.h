#ifndef LINKNODE_H
#define LINKNODE_H
#include <iostream>
using namespace std;
typedef int DATATYPE;

class linknode
{
public:
    linknode();
    linknode(DATATYPE value);
    void setData(DATATYPE value);
    DATATYPE getData();
    void setNext(linknode *newnode);
    linknode *getNext();

private:
    //数据域
    DATATYPE data;
    //指针域
    linknode *next;
};

#endif // LINKNODE_H
