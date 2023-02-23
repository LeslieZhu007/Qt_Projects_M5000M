#include "tree.h"
btree* tree_create()
{
    datatype value;
    printf("Please start enter data:\n");
    scanf("%c",&value);
    getchar();
    if (value == '#') {
        return NULL; //exit
    }
    //apply node
    btree *B = (btree *)malloc(sizeof(btree));
    if (NULL == B) {
        printf("apply node failed\n");
        return NULL;
    }
    B->data = value;
    B->left = tree_create();
    B->right = tree_create();
    return B;
}

void pri_order(btree *B)
{
    if (NULL == B) {
        return;
    }
    //print data
    printf("%c\t",B->data);

    pri_order(B->left);

    pri_order(B->right);
}
void in_order(btree *B)
{
    if (NULL == B) {
        return;
    }

    pri_order(B->left);

    //print data
    printf("%c\t",B->data);

    pri_order(B->right);

}
void post_order(btree *B)
{
    if (NULL == B) {
        return;
    }

    pri_order(B->left);

    pri_order(B->right);

    //print data
    printf("%c\t",B->data);

}
