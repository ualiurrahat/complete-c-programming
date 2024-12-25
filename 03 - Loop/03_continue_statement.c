#include <stdio.h>

int main()
{
    int i = 0;
    while (i < 10)
    {
        i = i + 1;
        if (i % 2 == 0)
        {
            continue; // even numbers will
        }
        printf("%d ", i);
    }
    return 0;
}