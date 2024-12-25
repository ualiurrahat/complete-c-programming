#include <stdio.h>

int main()
{
    int n = 5;
    int j = 1;
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", i + 1);
    }
    for (; j <= 5; j++)
    {
        printf("%d * %d = %d\n", n, j, n * j);
    }
    n = 10;
    j = 1;
    for (;;)
    {
        printf("%d * %d = %d\n", n, j, n * j);
        j++;
        if (j == 5)
        {
            break;
        }
    }
    return 0;
}