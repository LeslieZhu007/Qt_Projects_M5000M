#include "linknode.h"

//无参构造函数
LinkNode::LinkNode()
{
    this->data = 0;
    this->next = NULL;
}

//有参构造函数
LinkNode::LinkNode(DATATYPE value)
{
     this->data = value;
     this->next = NULL;
}
void LinkNode::setData(DATATYPE value)
{
    this->data = value;
}
DATATYPE LinkNode::getData()
{
    return this->data;
}
void LinkNode::setNext(LinkNode *newnode)
{
    this->next = newnode;
}
LinkNode *LinkNode::getNext()
{
    return this->next;
}
