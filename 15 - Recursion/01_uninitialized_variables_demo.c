/*highlighting the difference between local and global variable*/
#include <stdio.h> /

// Global variable declaration (default initialized to 0 by the compiler)
int x;

int main()
{
    // Local variable declaration (contains garbage value if uninitialized)
    int y;
    // printing values of x and y
    printf("x = %d, y = %d\n", x, y); // x = 0 and y = garbage value.

    return 0; // Indicates successful program termination
}
