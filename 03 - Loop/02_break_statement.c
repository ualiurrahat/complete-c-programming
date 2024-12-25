#include <stdio.h>

int main()
{
    int i = 1;
    while (i <= 100)
    {
        printf("%d ", i);
        i++;

        if (i > 20)
        {
            break; // loop will stop when i becomes 20
        }
    }
    return 0;
}