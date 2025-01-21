/* string revere .... rahat will be tahar.

function : strrev(string_name)....


*/

#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    int i;
    gets(name);

    printf("real string: %s\n", name);
    strrev(name);
    printf("after reversing: %s\n", name);

    printf("again reversing without libraray function: ");

    for(i = strlen(name)-1; i >= 0; i--)
    {
        printf("%c", name[i]);
    }


    return 0;
}
