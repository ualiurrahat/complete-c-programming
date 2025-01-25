// conditional operator: (condition) ? result 1(if condition is true) : result 2(false condition);

#include <stdio.h>

int main()
{
    int num1,num2;
    printf("enter two numbers:");
    scanf("%d %d", &num1, &num2);

    int large;

    large = (num1 < num2) ? num2 : num1;
    printf("large number is %d\n",large);

    return 0;
}
