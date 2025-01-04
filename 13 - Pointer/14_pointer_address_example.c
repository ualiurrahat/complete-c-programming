#include <stdio.h>

// Main function
int main()
{
    char c = 'A'; // Declare a char variable c and initialize it with 'A'
    char *p;      // Declare a pointer p of type char

    p = &c; // Assign the address of c to pointer p

    // Print the address of c using the pointer p
    printf("Address of c : %p\n", p);

    // Print the address of the pointer p itself (i.e., the address where p is stored)
    printf("Address of p : %p\n", &p);

    return 0; // Indicate successful program execution
}
