#include "linknode.h"


//无参构造函数
linknode::linknode()
{
        this->data = 0;
        this->next = NULL;
}

linknode::linknode(DATATYPE value)
{
        this->data = value;
        this->next = NULL;
}


void linknode::setData(DATATYPE value)
{
        this->data = value;
}
DATATYPE linknode::getData()
{
        return this->data;
}
void linknode::setNext(linknode *newnode)
{
     this->next = newnode;
}
linknode * linknode::getNext()
{
    return this->next;
}
