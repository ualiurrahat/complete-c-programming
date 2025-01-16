// series : 1 + 2 + 3 + ....... + n = n * (n+1) * 0.5;

#include <stdio.h>

int main()
{
    int n;
    printf("enter the last digit of the series:");
    scanf("%d", &n);

    int sum ;

    sum = n * (n+1) * 0.5;

    printf("sum is %d\n", sum);

   return 0;
}

