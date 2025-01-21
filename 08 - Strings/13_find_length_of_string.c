
#include <stdio.h>

int main()
{
    char name[100];
    printf("enter your name: ");
    gets(name);

    // using strlen()function to find length.
    int length = strlen(name);

    // finding length without the function.

    int i = 0;
    while(name[i] != 0)
    {
        i++;
    }


    printf("length = %d\n", length);
    printf("length without function = %d\n", i);

    return 0;
}
