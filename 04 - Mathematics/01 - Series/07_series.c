//  factorial series: 1 * 2 * 3 * 4 * ......* n = ?

#include <stdio.h>

int main()
{
    int n;
    printf("enter the last number of the seris:");
    scanf("%d", &n);

    int i, sum;
    sum = 1;

    for(i = 1; i <= n; i++){
        sum = sum * i;
    }
    printf("1 * 2 * 3 * ....... * %d = %d\n", n,sum);
    return 0;
}

