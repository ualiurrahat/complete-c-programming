// This program demonstrates pointer arithmetic with a string.

#include <stdio.h>

int main()
{
    char *str = "Bangladesh";

    // Dereferencing the pointer to print the first four characters of the string
    printf("%c, %c, %c, %c\n", *str, *(str + 1), *(str + 2), *(str + 3));

    // Printing the first character and adding values to the characters using pointer arithmetic
    printf("%c, %c, %c, %c\n", *str, *str + 1, *str + 2, *str + 3);

    return 0;
}
