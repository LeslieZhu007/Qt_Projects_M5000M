#ifndef __SEQUEUE_H__
#define __SEQUEUE_H__
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 8
typedef  int datatype ;
typedef struct
{
    datatype data[MAX];
    int front;   //队头下标
    int tail;      //队尾
} sequeue;

sequeue* queue_create();
int queue_empty(sequeue* q);
int queue_full(sequeue *);
void queue_push(sequeue *q,datatype e);
void queue_pop(sequeue *q);
void queue_show(sequeue *q);
int queue_size(sequeue *q);
void queue_free(sequeue *q);


#endif // SEQUEUE_H
