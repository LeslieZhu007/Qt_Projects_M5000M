#include "myclass.h"

Myclass::Myclass()
{
        Myclass::num++;
}
Myclass::~Myclass()
{
    Myclass::num--;
}
Myclass::Myclass(const Myclass &)
{
    Myclass::num++;
}
 int Myclass::num = 0;
