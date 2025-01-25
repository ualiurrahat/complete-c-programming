// learn bitwise operation from subeen book 2.
#include <stdio.h>

int main()
{
    int a = 25;
    int b = 8;
    int c ;

    c = a & b;
    printf("a&b = %d\n",c);

    c = a | b;
    printf("a | b = %d\n",c);

    c = a ^ b;
    printf("a ^ b = %d\n",c);

    return 0;
}
