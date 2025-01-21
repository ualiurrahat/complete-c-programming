#include <stdio.h>

int main()
{
    char a[100];
    char b[100];
    int i = 0;


    // input for strins 'a':
    printf("enter strings for a : ");
    gets(a);

    // coping contents of 'a' into 'b':
    while(a[i] != '\0')
    {
        b[i] = a[i];
        i++;
    }

    b[i] = '\0';

    printf("b = %s\n", b);

    return 0;
}
