// print out multiplication table for 1 to number 20
// up to its 10th value
#include <stdio.h>

int main()
{
    for (int i = 1; i <= 20; i++)
    {
        printf("Multiplication table for %d\n", i);
        for (int j = 1; j <= 10; j++)
        {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }

    return 0;
}