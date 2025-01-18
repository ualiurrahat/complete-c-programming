// a program to find out max number from an array.
#include <stdio.h>

int main()
{
    int n;

    printf("how many numbers you want to use:\n");
    scanf("%d", &n);

    int num[n];

    printf("enter your numbers:\n");

    int i;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    int max = num[0];// for min, int min = num[0]
    for(i = 1; i < n; i++)
    {
        if(max < num[i])// for min, if(min > num[i]
        {
            max = num[i];// for min, min = num[i]
        }
    }

    printf("max is %d\n", max);
    return 0;
}
