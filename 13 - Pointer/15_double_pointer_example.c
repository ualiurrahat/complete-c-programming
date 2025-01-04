#include <stdio.h>

// Main function
int main()
{
    char c = 'A'; // Declare a char variable c and initialize it with 'A'
    char *p, **q; // Declare a char pointer p and a pointer to pointer q

    p = &c; // Assign the address of c to pointer p
    q = &p; // Assign the address of p to pointer to pointer q

    // Print the value of c directly
    printf("Value of c: %c\n", c);

    // Print the value of c by dereferencing pointer p (p points to c)
    printf("Value of c: %c\n", *p);

    // Print the value of c by dereferencing pointer to pointer q (q points to p, and p points to c)
    printf("Value of c: %c\n", **q);

    return 0; // Indicate successful program execution
}
