//unary == increment/decrement operator.

#include <stdio.h>

int main()
{
    int x = 10;

    int y = x++; // y = 10;

    printf("x = %d\n",x);// x = x++ =11
    printf("y = %d\n",y);// y = 10

    y = ++x;// y = 11 + 1 = 12
    printf("x = %d\n",x);// x =12
    printf("y = %d\n",y);// y = 12


    printf("x = %d\n",x++);//12
    printf("x = %d\n",x);//13
    printf("x = %d\n",++x);//14
    printf("x = %d\n",x);//14
    printf("x = %d\n",x--);//14
    printf("x = %d\n",--x);//12



    return 0;
}
