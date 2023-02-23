

#include <stdio.h>

char* GetMemory(void)
{
    char p[] = "hello world";
    return p;
}
void Test(void)
{
    char *str = NULL;
    str = GetMemory();
    printf(str);
}
int main(int argc, char const *argv[])
{
    Test();
    return 0;
}


