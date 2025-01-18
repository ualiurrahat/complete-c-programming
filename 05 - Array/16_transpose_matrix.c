/* a program to find transpose matrix of any given matrix.

    given matrix row = transpose matrix column.
    given matrix column = transpose matrix row.
*/

#include <stdio.h>

int main()
{
    // declare matrix.

    int a[10][10], transpose[10][10];

    // declare var for loop and rows, columns.
    int i, j, rows, cols;

    // taking input for rows and columns for given matrix.

    printf("enter rows and columns of the matrix:");
    scanf("%d %d", &rows, &cols);
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

    // making transpose of a matrix.

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
           transpose[j][i] = a[i][j];
        }
    }
    // printing transpose matrix

    printf("transpose matrix of a is:\n");
    printf("t = ");

    for(i = 0; i < cols; i++)
    {
        printf("\t");
        for(j = 0; j < rows; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }


    return 0;
}
