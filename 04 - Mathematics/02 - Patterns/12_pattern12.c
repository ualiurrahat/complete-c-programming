/* for n = 3, pattern would look like this.

        *
      * * *
    * * * * *
      * * *
        *

*/

#include <stdio.h>

int main()
{
    int n;
    int row, col;
    printf("enter n = ");
    scanf("%d", &n);

    // printing  upper half.
    for(row = 1; row <= n; row++)
    {
        // space printing
        for(col = 1; col <= n-row; col++)
        {
            printf(" ");
        }
        //  printing *
        for(col = 1; col <= 2*row-1; col++)
        {
            printf("*");
        }
        printf("\n");
    }

    // printing lower half.
    for(row = n-1; row >= 1; row--)
    {
        //printing space
        for(col = 1; col <= n-row; col++)
        {
            printf(" ");
        }
        // printing *.
        for(col = 1; col <= 2*row-1; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

