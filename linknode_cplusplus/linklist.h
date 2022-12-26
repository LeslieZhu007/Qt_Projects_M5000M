#ifndef __LINKLIST_H__
#define __LINKLIST_H__

#include <iostream>
#include "linknode.h"
using namespace std;

class LinkList
{
private:
    LinkNode *head;
public:
    LinkList();
    void linklist_insert(DATATYPE value);
    bool linklist_empty();
    void linklist_show();
};




#endif // LINKLIST_H
