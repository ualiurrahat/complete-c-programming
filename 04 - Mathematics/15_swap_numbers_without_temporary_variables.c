#include <stdio.h>

int main()
{
    int num1,num2;

    num1 = 25;
    num2 = 8;

    num1 = num1 - num2;//17
    num2 = num1 + num2;//25;
    num1 = num2 - num1;//8

    printf("num1 = %d\n",num1);
    printf("num2 = %d\n",num2);


    return 0;

}
