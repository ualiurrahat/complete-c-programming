/*This program prints the sizes of different data types (char, int, double) as well as the sizes of different structures (s1, s2, s3, s4).
Memory Alignment: The differences in structure sizes are due to padding added for memory alignment. Some compilers add padding to ensure that data is stored in memory in a way that optimizes access to certain types (like int or double), which typically require alignment at specific byte boundaries.
*/

#include <stdio.h>

// Definition of the first structure
struct s1
{
    int n;    // Integer: typically takes 4 bytes
    double d; // Double: typically takes 8 bytes
    char c;   // Char: typically takes 1 byte
};

// Definition of the second structure
struct s2
{
    char c;   // Char: typically takes 1 byte
    int n;    // Integer: typically takes 4 bytes
    double d; // Double: typically takes 8 bytes
};

// Definition of the third structure
struct s3
{
    char c1;  // Char: typically takes 1 byte
    char c2;  // Char: typically takes 1 byte
    char c3;  // Char: typically takes 1 byte
    char c4;  // Char: typically takes 1 byte
    int n;    // Integer: typically takes 4 bytes
    double d; // Double: typically takes 8 bytes
};

// Definition of the fourth structure
struct s4
{
    char c1;  // Char: typically takes 1 byte
    int n;    // Integer: typically takes 4 bytes
    char c2;  // Char: typically takes 1 byte
    double d; // Double: typically takes 8 bytes
    char c3;  // Char: typically takes 1 byte
    char c4;  // Char: typically takes 1 byte
};

int main()
{
    // Printing the size of each data type (char, int, and double)
    printf("char size: %lu bytes\n", sizeof(char));     // Size of char
    printf("int size: %lu bytes\n", sizeof(int));       // Size of int
    printf("double size: %lu bytes\n", sizeof(double)); // Size of double

    // Printing the size of each structure
    printf("s1 size: %lu bytes\n", sizeof(struct s1)); // Size of structure s1
    /*s
    izeof(struct s1): Here, struct s1 is a type, and you are calculating the size of that type.
sizeof(s1): If you remove struct and use s1, the compiler thinks you're referring to a variable (or instance) named s1,
 not the type struct s1.
  In your code, there is no variable named s1; instead, you have struct s1 as a type.*/
    printf("s2 size: %lu bytes\n", sizeof(struct s2)); // Size of structure s2
    printf("s3 size: %lu bytes\n", sizeof(struct s3)); // Size of structure s3
    printf("s4 size: %lu bytes\n", sizeof(struct s4)); // Size of structure s4

    return 0; // End of the program
}
