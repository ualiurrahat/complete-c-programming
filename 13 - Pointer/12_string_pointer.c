#include <stdio.h>

// Main function
int main()
{
    char s[] = "Bangladesh"; // Declare a character array and initialize it with a string
    char *p;                 // Declare a pointer to a character

    p = s; // Assign the address of the array 's' to the pointer 'p'

    // Print the string using the pointer 'p'. It behaves similarly to printing 's' directly.
    printf("Name of our country : %s\n", p);

    return 0; // Indicate successful program execution
}
