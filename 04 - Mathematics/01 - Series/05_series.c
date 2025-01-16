// 1^2 + 2^2 + 3^2 +......= ?
#include <stdio.h>

int main()
{
    int n;
    printf("enter the last digit of the series:");
    scanf("%d", &n);

    int i, sum;
    sum = 0;
    for(i = 1; i <= n; i++){
        sum = sum + i * i;
    }
    printf("1^2 + 2^2 + 3^3 +......+ %d ^ %d =%d\n",n,n,sum);

    return 0;
}
