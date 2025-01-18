

#include <stdio.h>

int main()
{
    int n;
    printf("how many numbers you want to use:\n");
    scanf("%d", &n);
    printf("enter your numbers:\n");
    int marks[n];
    int i;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &marks[i]);
    }

    int sum = 0;
    for(i = 0; i < n; i++)
    {
        sum = sum + marks[i];
    }

    printf("marks sum = %d\n", sum);
    printf("average = %.2lf\n", (double) sum / n);
    return 0;
}
