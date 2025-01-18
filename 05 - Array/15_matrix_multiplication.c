/* two matrix will be allowed for multiplication if : c1 = r2;
    result : r1 = c2;
    here , c = column
            r = row

    ex: ( m * n) * ( n * k) = result(m * k).

*/

#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], result[10][10];

    // var for rows and columns and other.
    int r1, r2, c1, c2;

    // var for each elements in result matrix.
    int sum = 0;

    // var for loop.
    int i, j, k;

    // input for a matrix
    printf("enter row and column for 'a' matrix:");
    scanf("%d %d", &r1, &c1);

    // input for b matrix
    printf("enter row and column for 'b' matrix:");
    scanf("%d %d", &r2, &c2);

    // checking conditions for performing multiplication.
    while(c1 != r2)
    {
        printf("\nError! columns of first matrix not equal to rows of second matrix.\n");
        printf("Hence multiplication not possible.\n");

        // input for a matrix
    printf("enter row and column for 'a' matrix:\n");
    scanf("%d %d", &r1, &c1);

    // input for b matrix
    printf("enter row and column for 'b' matrix:\n");
    scanf("%d %d", &r2, &c2);

    printf("\n");

    }

     // input value for matrix a;
    printf("enter elements for matrix a:\n");
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c1; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }

    }

    // input value for matrix b;
     printf("\n\n enter elements for matrix b:\n");
    for(i = 0; i < r2; i++)
    {
        for(j = 0; j < c2; j++)
        {
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    // multiplying matrix a and b. result = a * b.
    for(i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j++)
        {
            for(k = 0; k < c1; k++)
            {
               sum = sum + a[i][k] * b[k][j];
               /* here see that
               for a matrix, row constant and column changes.
                for b matix, row changes and column constant.
                so, k is for change and i,j for constant.
                */
            }
            result[i][j] = sum;
            sum = 0;
        }
    }

     // printing a matrix
    printf("a =");
    for(i = 0; i < r1; i++)
    {

        printf("\n");
        printf("\t");
        for(j = 0; j < c1; j++)
        {
            printf("%d ", a[i][j]);
        }
    }

    printf("\n");


    // printing b matrix
    printf("b =");
    for(i = 0; i < r2; i++)
    {
        printf("\n");
        printf("\t");
        for(j = 0; j < c2; j++)
        {
            printf("%d ", b[i][j]);
        }
    }

    printf("\n");

    // printing result matrix.

    printf("result matrix = ");
    for(i = 0; i < r1; i++)
    {
        printf("\n");
        printf("\t");
        for(j = 0; j < c2; j++)
        {
            printf("%d ", result[i][j]);
        }
    }


    return 0;
}
