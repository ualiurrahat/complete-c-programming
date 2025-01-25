#include <stdio.h>

int main()
{
    int n,fact,i;
    printf("enter a number:");
    scanf("%d", &n);

    fact = 1;

    for(i = 1; i <=n; i++){
        fact = fact * i;
    }

    printf("factorial of %d is %d\n",n,fact);

    return 0;
}

