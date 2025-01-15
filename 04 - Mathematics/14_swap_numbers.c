// swap two numbers

#include <stdio.h>

int main()
{
    int num1, num2, temp;

    num1 = 10;
    num2 = 20;

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("num1 = %d\n, num2 = %d\n", num1, num2);

    return 0;
}
