#include <stdio.h>

int main()
{
    int x = 1;
    int y = x; // y = 1;
    x = 2;
    printf("x = %d, y = %d", x,y);
    return 0;
}