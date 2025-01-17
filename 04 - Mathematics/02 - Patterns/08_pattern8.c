/* for n = 3, pattern would look like this.
    * * *
    * * *
    * * *
    */
#include <stdio.h>

int main()
{
    int n,row,col;
    printf("enter n = ");
    scanf("%d", &n);

    for(row = 1; row <= n; row++)
    {
        for(col = 1; col <= n; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
