#include <stdio.h>

int main()
{
    int num1, num2, value;
    char sign;
    printf("Enter value for num1: ");
    scanf("%d", &num1);
    printf("Enter value for num2: ");
    scanf("%d", &num2);
    sign = '+';
    value = num1 + num2;
    printf("%d %c %d = %d\n", num1, sign, num2, value);
    sign = '-';
    value = num1 - num2;
    printf("%d %c %d = %d\n", num1, sign, num2, value);
    sign = '*';
    value = num1 * num2;
    printf("%d %c %d = %d\n", num1, sign, num2, value);
    sign = '/';
    value = num1 / num2;
    printf("%d %c %d = %d\n", num1, sign, num2, value);
    return 0;
}