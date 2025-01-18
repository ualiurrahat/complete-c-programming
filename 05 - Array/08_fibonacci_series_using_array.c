// fibonacci series: 0 1 1 2 3 5 8 13 ...
#include <stdio.h>

int main()
{
    int n;
    printf("enter the number of fibonacci terms you want to see:\n");
    scanf("%d", &n);

    int fibo[n];
    fibo[0] = 0;
    fibo[1] = 1;

    int i;

    for(i = 2; i <=n; i++)
    {
        fibo[i] = fibo[i-1] + fibo[i-2];
    }

    for(i =0; i <= n; i++)
    {
        printf("%d ", fibo[i]);
    }

    return 0;
}
