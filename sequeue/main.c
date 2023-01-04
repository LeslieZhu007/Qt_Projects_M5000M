#include "sequeue.h"

int main()
{
    //创建队列
    sequeue *q = queue_create();
    if(NULL == q)
    {
        return -1;
    }
    queue_push(q,1);
    queue_push(q,2);
    queue_push(q,3);
    queue_push(q,4);
    queue_push(q,5);
    queue_push(q,6);
    queue_push(q,7);
    queue_push(q,8);
    queue_push(q,9);

    /*
     queue_pop(q);
    queue_pop(q);
    queue_pop(q);
    queue_pop(q);
    queue_pop(q);
    queue_pop(q);
*/
    queue_show(q);

    return 0;
}
