/* for n = 3, pattern would look like:
         *
       * * *
     * * * * *

*/


#include <stdio.h>

int main()
{
    int n;
    int col, row;
    printf("enter n = ");
    scanf("%d", &n);

    for(row = 1; row <= n; row++)
    {
        // printing space.
        for(col = 1; col <= n-row; col++)
        {
            printf(" ");
        }
        // printing *
        for(col = 1; col <= 2*row - 1; col++)
        {
            printf("*");

        }
        printf("\n");
    }



    return 0;
}

