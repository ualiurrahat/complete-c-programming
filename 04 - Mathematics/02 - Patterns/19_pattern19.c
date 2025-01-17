/* for n=4, pattern would look like this,
         1234321
         12321
         12
         1
    */

#include <stdio.h>

int main()
{
    int n, row, col;
    int count = 0;

    printf("enter n = ");
    scanf("%d", &n);

    for(row = n-1; row>= 1; row--)
    {
        for(col = 1; col <= n-row; col++)
        {
            printf(" ");
        }
        for(col = 1; col <=row; col++)
        {
            printf("%d", col);
        }
        for(col = row-1; col >= 1; col--)
        {
            printf("%d", col);
        }
        printf("\n");
    }
    return 0;
}

