
/* for n = 3. the pattern would look like

numeric pattern:    1 2 3
                    1 2
                    1

binary pattern:     1 0 1
                    1 0
                    1

alphabetic pattern: A B C
                    A B
                    A

asterisk pattern:   * * *
                    * *
                    *

*/

#include <stdio.h>

int main()
{
    int row, col;
    int num;
    printf("enter N = ");
    scanf("%d", &num);

    // code for numeric pattern.
    for(row = num; row >= 1; row--)
    {
        for(col = 1; col <= row; col++)
        {
            printf("%d ", col);
        }
        printf("\n");
    }

    // code for binary pattern.
    printf("\n");
    printf(" binary pattern.");
    printf("\n");
    for(row = num; row >= 1; row--)
    {
        for(col = 1; col <= row; col++)
        {
            printf("%d ", col%2);
        }
        printf("\n");
    }

    // code for alphabetic pattern.
    printf("\n");
    printf("alphabetic pattern\n");
    for(row = num; row >= 1; row--)
    {
        for(col = 1; col <= row; col++)
        {
            printf("%c ", col+64);
        }
        printf("\n");
    }

    // code for asterisk pattern.
    printf("\n");
    printf("asterisk pattern:\n");
    for(row = num; row >= 1; row--)
    {
        for(col = 1; col <= row; col++)
        {
            printf("* ", col);
        }
        printf("\n");
    }





    return 0;

}
