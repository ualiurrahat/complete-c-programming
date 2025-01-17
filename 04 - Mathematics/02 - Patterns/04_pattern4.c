/* for n = 3, pattern would look like it,
        1
        1 2
        1 2 3
        1 2 3
        1 2
        1

        same number would look like this.
        1
        2 2
        3 3 3
        2 2
        1

*/

#include <stdio.h>

int main()
{
    int n;
    int row, col;
    printf("enter n = ");
    scanf("%d", &n);

    // code for ascending sequence.
    for(row = 1; row <= n; row++)
    {
        for(col = 1; col <= row; col++)
        {
            printf("%d ", col);
        }
        printf("\n");
    }
    // code for descending sequence.
    for(row = n-1; row >= 1; row--)
    {
        for(col = 1; col <=row; col++)
        {
            printf("%d ", col);
        }
        printf("\n");
    }

    printf("\n");
    printf("code for same number: \n");

    // code for same number.
    for(row = 1; row <= n; row++)
    {
        for(col = 1; col <= row; col++)
        {
            printf("%d ", row);
        }
        printf("\n");
    }

    for(row = n-1; row >= 1; row--)
    {
        for(col = 1; col <=row; col++)
        {
            printf("%d ", row);
        }
        printf("\n");
    }


    return 0;
}
