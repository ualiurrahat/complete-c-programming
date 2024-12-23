// take user input to add two integer numbes
#include <stdio.h>

int main()
{
    int a, b, sum;
    // using scanf function to take user input
    // scanf("%d", &a);
    // scanf("%d", &b);
    // using two input at the same time from user
    scanf("%d"
          "%d",
          &a, &b);

    sum = a + b;
    printf("%d + %d = %d\n", a, b, sum);
    return 0;
}