#include <stdio.h>

int main()
{
    int digit;
    printf("enter your digit:");
    scanf("%d", &digit);

    int count = 0;

    while(digit != 0){
        digit = digit / 10;
        count++;
    }
    printf("total count = %d\n",count);

    return 0;
}

