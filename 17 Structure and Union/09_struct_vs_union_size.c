#include <stdio.h>

// Definition of a structure with different data types
struct s
{
    char ch;      // A character
    int n;        // An integer
    char str[16]; // A string of 16 characters
} sv;             // Structure variable 'sv'

/* Definition of a union with different data types
   Only one member of the union can be used at a time,
   but all members share the same memory location */
union u
{
    char ch;      // A character
    int n;        // An integer
    char str[16]; // A string of 16 characters
} uv;             // Union variable 'uv'

int main()
{
    int struct_size, union_size;

    // Calculate the size of the structure variable 'sv'
    struct_size = sizeof(sv);

    // Calculate the size of the union variable 'uv'
    union_size = sizeof(uv);

    // Print the size of the structure
    printf("Structure variable took %d bytes.\n", struct_size);

    // Print the size of the union
    printf("Union variable took %d bytes.\n", union_size);

    return 0; // End of program
}
