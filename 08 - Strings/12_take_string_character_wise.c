// display string in character wise.
// ex : rahat will be shown like r a h a t.

#include <stdio.h>

int main()
{
    char name[100];
    printf("enter your name: ");
    gets(name);

    int i;

    for(i = 0; name[i] != '\0'; i++)
    {
        printf("%c ", name[i]);
    }

    return 0;
}
