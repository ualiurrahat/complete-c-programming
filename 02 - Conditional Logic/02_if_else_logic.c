#include <stdio.h>

int main()
{
    int n = 10;
    if (n < 30)
    {
        printf("n is less than 30.\n");
    }
    // if part will run, and else if will be avoided.
    else if (n < 50)
    {
        printf("n is less than 50.\n");
    }
    return 0;
}