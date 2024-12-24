#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    ch = getchar();
    if (ch >= 'a' && ch <= 'z')
    {
        printf("%c is lowercase.\n", ch);
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c is upper case.\n", ch);
    }
    return 0;
}