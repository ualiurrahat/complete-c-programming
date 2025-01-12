#include <stdio.h>

// Definition of a union
union u
{
    char ch; // A character
    int x;   // An integer (int)
    int y;   // Another integer (int)
} uv;        // Union variable 'uv'

int main()
{
    uv.ch = 'A';                   // Assign character 'A' to the union's 'ch' member
    printf("uv.ch = %c\n", uv.ch); // Output: 'A' (valid, as 'ch' is assigned)

    uv.x = 17;                   // Assign integer 17 to the union's 'x' member
    printf("uv.x = %d\n", uv.x); // Output: 17 (valid, as 'x' is assigned)

    // Since the union shares the same memory location for all members,
    // assigning to 'x' affects 'ch' as well, leading to abnormal behavior.
    printf("uv.ch = %c\n", uv.ch); // Output: Abnormal (unexpected value due to memory overwrite)

    uv.y = 18;                   // Assign integer 18 to the union's 'y' member
    printf("uv.y = %d\n", uv.y); // Output: 18 (valid, as 'y' is assigned)

    // Again, due to the nature of unions, assigning to 'y' overwrites the memory for 'ch' and 'x'.
    printf("uv.ch = %c\n", uv.ch); // Output: Abnormal (unexpected value due to memory overwrite)
    printf("uv.x = %d\n", uv.x);   // Output: Abnormal (unexpected value due to memory overwrite)

    return 0; // End of program
}
