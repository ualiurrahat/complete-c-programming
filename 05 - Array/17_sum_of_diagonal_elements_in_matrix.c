#include <stdio.h>

int main()
{
    // declare matrix.

    int a[10][10];

    // declare var for loop and rows, columns.
    int i, j, rows, cols;

    // var for sum total of diagonal elements.
    int sum = 0;

    // taking input for rows and columns for given matrix.

    printf("enter rows and columns of the matrix:");
    scanf("%d %d", &rows, &cols);
    while(rows != cols)
    {
        printf("error!rows and columns have to equal for having diagonal.\n");
        printf("enter rows and columns of the matrix:");
        scanf("%d %d", &rows, &cols);
    }
    printf("\n");

     // getting elements for matix.
    printf("enter matrix elements:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // printing user input matrix.
    printf("\n");
    printf("your matix is:\n");
    printf("a = ");

     for(i = 0; i < rows; i++)
    {
        printf("\t");
        for(j = 0; j < cols; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // printing sum of diagonal elements.

     printf("here is the sum of diagonal elements:\n");
     for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            if(i == j)
            {
                sum = sum + a[i][j];
            }

        }
    }

    printf("sum  is : %d\n", sum);

    return 0;
}
