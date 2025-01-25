#include <stdio.h>

int main()
{
    int a;
    printf("enter a number:");
    scanf("%d", &a);

    a += 2;   //a = a + 2;
    printf("a = %d\n",a);

    a -= 2;
    printf("a = %d\n",a);

    a *= 5;
    printf("a = %d\n",a);

    a /= 2;
    printf("a = %d\n",a);

    a *= 2 + a;// a * (2+a) ;
    printf("a = %d\n", a);








    return 0;
}
