#include "linklist.h"

int main()
{
    LinkList L;
    L.linklist_insert(100);
    L.linklist_insert(200);
    L.linklist_insert(300);
    L.linklist_insert(400);
    L.linklist_insert(500);
    L.linklist_insert(600);

    L.linklist_show();

    return 0;
}
