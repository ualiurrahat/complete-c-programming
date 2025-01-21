/* string comparison:
function : int var = strcmp(a, b);
if value of var is 0, strings are equal.
else, not equal and value will be 1.

*/

#include <stdio.h>

int main()
{
    char name[20];
    char name2[20];

    printf("enter name & name 2 : \n");
    gets(name);
    gets(name2);

    int d = strcmp(name, name2);

    if(d == 0)
    {
        printf("strings are equal\n");
    }
    else
    {
        printf("strings are not equal\n");
    }

    /* string comparison without library funcion.
    raw coding.....
    char name[100];
    char dup[100];

    gets(name);
    gets(dup);

    int i = 0, j = 0;
    int d = 0;;

    for(i = 0, j = 0; name[i] != '\0', dup[i] != '\0'; i++, j++)
    {
        if(name[i] != dup[i])
        {
            d++;
        }
    }
    if(d == 0)
    {
        printf("equal\n");
    }
    else
    {
        printf("not equal\n");
    }
*/


    return 0;
}

