/* for n = 5, pattern would look like this,

     * * * * *
     *       *
     *       *
     *       *
     * * * * *

     */

#include <stdio.h>

int main()
{
    int n;
    int row, col;
    printf("enter n = ");
    scanf("%d", &n);

    for(row = 1; row <= n; row++)
    {
        for(col = 1; col <= n; col++)
        {
            if(row == 1 || row == n || col == 1 || col == n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
