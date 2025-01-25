// leap year .
// if year is divisible by 400. then definitely leap year.
// if not divisible by 400 and 100 but 4, then also leap year.

#include <stdio.h>

int main()
{
    int n;
    int year;
    int i;

    printf("how many times you want to check: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("enter your year: ");
        scanf("%d", &year);

        if(year % 400 == 0)
        {
            printf("leap year\n");
        }
        else if(year % 4 == 0 && year % 100 != 0)
        {
            printf("leap year\n");
        }
        else
        {
            printf("not leap year\n");
        }
    }
    return 0;
}

