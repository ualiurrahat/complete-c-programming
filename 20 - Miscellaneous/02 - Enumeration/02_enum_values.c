#include <stdio.h>

// Define an enumeration to represent colors
// Each name is assigned an integer value starting from 0 by default
enum COLOR
{
    NO_COLOR, // 0
    RED,      // 1
    GREEN,    // 2
    BLUE      // 3
};

int main()
{
    // Print the integer values associated with each enum constant
    printf("Value of NO_COLOR: %d\n", NO_COLOR); // Prints 0
    printf("Value of RED: %d\n", RED);           // Prints 1
    printf("Value of GREEN: %d\n", GREEN);       // Prints 2
    printf("Value of BLUE: %d\n", BLUE);         // Prints 3

    return 0;
}
