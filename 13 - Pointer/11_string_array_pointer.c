#include <stdio.h>

// Main function
int main()
{
    char s[] = "Bangladesh"; // Declare a character array and initialize it with a string

    // Print the string using the format specifier %s (null-terminated string)
    printf("Name of our country : %s\n", s);

    // Print the address of the array 's' (this is the address of the first character in the array)
    printf("Address of s: %p\n", s);

    return 0; // Indicate successful program execution
}
