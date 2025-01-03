#include <stdio.h>

// Main function
int main()
{
    // Declare variables of different data types
    int num;
    char ch;
    double d_num;
    float f_num;

    // Print the size of an int using sizeof directly
    printf("%lu\n", sizeof(int));

    // Print the sizes of various data types using sizeof
    printf("Size of int: %d\n", sizeof(num));      // Size of integer variable
    printf("Size of char: %d\n", sizeof(ch));      // Size of character variable
    printf("Size of double: %d\n", sizeof(d_num)); // Size of double variable
    printf("Size of float: %d\n", sizeof(f_num));  // Size of float variable

    return 0; // Indicate successful program execution
}
