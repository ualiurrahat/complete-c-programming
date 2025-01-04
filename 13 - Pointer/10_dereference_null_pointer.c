#include <stdio.h>

// Main function
int main()
{
    int *p = NULL; // Declare an integer pointer p and initialize it to NULL

    // Dereferencing a NULL pointer causes undefined behavior and can result in a crash
    *p = 100; // This line will likely cause a segmentation fault or crash due to dereferencing NULL

    // Print the value at the memory location pointed to by p (this will not be executed if the program crashes)
    printf("Value of *p : %d\n", *p);

    return 0; // Indicate successful program execution (this won't be reached due to the crash)
}
