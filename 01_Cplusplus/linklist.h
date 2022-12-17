#ifndef LINKLIST_H
#define LINKLIST_H
#include "linknode.h"

using namespace std;

class linklist
{
public:
    linklist();
    void linklistinsert(DATATYPE value);
    bool linklistisempty();
    void linklistshow();

private:
    linknode *head;
};

#endif // LINKLIST_H
