/*  a program to concat to string.
function: strcat(str1,str2). str2 will be added at the end of str1.


*/

#include <stdio.h>

int main()
{
    char name[200] = "i am ualiur ";
    char dream[200] = "rahat the billionaire ";

    printf("%s\n", name);

    // using function to concatenate these strings.

    strcat(name,dream);

    printf("%s\n", name);
    printf("%s\n", dream);

    // you can add string after the fist string in the function.
    strcat(name, "brand");//

    printf("%s\n", name);

    return 0;
}
