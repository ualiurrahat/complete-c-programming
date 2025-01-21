/* copy contents of one string to another

function : strcpy(copied, original);


*/

#include <stdio.h>
#include <string.h>

int main()
{
    char real[] = "this should be copied in the second string";
    char copied[100];

    // using the function strcpy().

    strcpy(copied, real); // first where you want to copy, what you want to copy

    printf("real = %s\n", real);
    printf("copied = %s\n", copied);

    return 0;

}
