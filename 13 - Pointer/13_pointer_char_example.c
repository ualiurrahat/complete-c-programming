#include <stdio.h>

// Main function
int main()
{
    char c1 = 'A', c2 = 'B', c3 = 'C'; // Declare three char variables and initialize them
    char *p1, *p2, *p3;                // Declare three char pointers

    p3 = &c3; // Assign the address of c3 to p3
    p2 = &c2; // Assign the address of c2 to p2
    p1 = &c1; // Assign the address of c1 to p1

    // Dereference the pointers and print the characters
    printf("%c, %c, %c\n", *p1, *p2, *p3);

    return 0; // Indicate successful program execution
}
