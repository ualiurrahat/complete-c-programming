/* structure of goto statement:
 label:
        statement;
        ............(label end)

 condition
        goto(label calling);
*/
#include <stdio.h>

int main()
{
    int n = 1;

print: //  label
    printf("%d\t",n);
    n++;

    if(n < 5)
        goto print;

    return 0;
}
