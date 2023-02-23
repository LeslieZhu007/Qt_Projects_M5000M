#include "tree.h"

int main()
{
    btree *B = tree_create();
    if(NULL == B)
    {
        printf("create tree failed\n");
        return -1;
    }
    pri_order(B);
    return 0;
}
