#include "linklist.h"

LinkList::LinkList()
{
    //创建一个头结点并将指针域保存NULL标识链表为空
    this->head = new LinkNode();
}
void LinkList::linklist_insert(DATATYPE value)
{
    LinkNode *temp = new LinkNode(value);

    //新插入结点的指针域保存头结点的后一个结点的地
    temp->setNext(this->head->getNext());

    //头结点的指针域保存新插入结点的地址
    this->head->setNext(temp);

}
bool LinkList::linklist_empty()
{
    if(this->head->getNext() == NULL)
    {
        return true;
    }else
     {
        return false;
    }
}
void LinkList::linklist_show()
{
    LinkNode *p = this->head;
    while(p->getNext()!=NULL)
    {
        p = p->getNext();
        cout<<p->getData()<<endl;
    }
}
