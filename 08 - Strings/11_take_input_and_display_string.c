// take an string input and display it.

#include <stdio.h>

int main()
{
    char name[100];
    printf("enter your name: ");
    gets(name);  // scanf is not used because it can't read values after a space. use scanf and see the difference.

    printf("name : %s\n", name);

    return 0;
}
