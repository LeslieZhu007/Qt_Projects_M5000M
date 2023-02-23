#ifndef TREE_H
#define TREE_H
#include <stdio.h>
#include <stdlib.h>


typedef char datatype ;

typedef  struct Node
{
    datatype data;
    struct Node *left;
    struct Node *right;
} btree;

btree* tree_create();

void pri_order(btree *B);
void in_order(btree *B);
void post_order(btree *B);

#endif // TREE_H
