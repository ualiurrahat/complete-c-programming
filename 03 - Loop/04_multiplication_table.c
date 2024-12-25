#include <stdio.h>

int main()
{
    int n = 5;
    printf("Mulitiplicaion using for loop: \n");
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }
    printf("Multiplication using while loop:\n");
    int i = 1;
    while (i <= 10)
    {
        printf("%d * %d = %d\n", n, i, n * i);
        i++;
    }
    return 0;
}