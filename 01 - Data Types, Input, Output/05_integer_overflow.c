#include <stdio.h>

int main()
{
    int a ;
    a = 1000;
    printf("Value of a is %d", a);
    a = -21000;
    printf("Value of a is %d", a);
    a = 10000000;
    printf("Value of a is %d", a);
    a = 10002000400503;
    // overflow of int value range
    printf("Value of a is %d", a);

    return 0;
}