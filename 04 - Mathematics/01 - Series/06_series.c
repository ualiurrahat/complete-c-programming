// series: 1 * 3 * 5 ......* n = ?

#include <stdio.h>

int main()
{
    int n;
    printf("enter the last odd number of the series:");
    scanf("%d", &n);

    int i, sum;
    sum = 1;

    for(i = 1; i <= n; i += 2){
        sum = sum * i;
    }
    printf("1 * 3 * 5 ....... * %d = %d\n", n,sum);
    return 0;
}

