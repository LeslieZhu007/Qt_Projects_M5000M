#include "sequeue.h"

sequeue* queue_create()
{
     sequeue *s = (sequeue *)malloc(sizeof (sequeue));
     if(NULL == s)
     {
        // printf("循环顺序栈创建失败\n");
         printf("cyclic sequence stack created fail\n");
         return NULL;
     }
     //初始化队列
     memset(s->data,0,sizeof (s->data));
     //队列为空
     s->front = s->tail=0;
     //printf("循环顺序栈创建成功\n");
     printf("cyclic sequence stack created successfully\n");
     return s;

}
int queue_empty(sequeue *q)
{
        return q->front ==q->tail;
}


int queue_full(sequeue *q)
{
        return (q->tail+1)%MAX == q->front;
}


void queue_push(sequeue *q,datatype e)
{
    if(NULL == q || queue_full(q))
    {
        printf("enter the queue failed\n");
        return;
    }
    q->data[q->tail] = e;
    q->tail = (q->tail+1)%MAX;
    printf("%d entered the queue successfully\n",e);
}


void queue_pop(sequeue *q)
{
    if(NULL == q || queue_empty(q))
    {
       // printf("出队列失败\n");
         printf("out of the queue failed\n");
        return;
    }
    datatype value = q->data[q->front];
    q->front = (q->front+1)%MAX;
    //printf("%d出队列成功\n",value);
    printf("%d out of the queue successfully\n",value);
}


void queue_show(sequeue *q)
{
    if(NULL == q || queue_empty(q))
    {
         printf("show queue failed\n");
        return;
    }
    while (q->front!=q->tail) {
        datatype value = q->data[q->front];
        q->front = (q->front+1)%MAX;
        printf("%d\t",value);
    }

    printf("\n");
}


int queue_size(sequeue *q)
{
    return (q->tail-q->front+MAX)%MAX;
}


void queue_free(sequeue *q)
{
    if(NULL != q)
    {
        free(q);
        q=NULL;
    }
    printf("destroying sequeue successfully\n");
}



