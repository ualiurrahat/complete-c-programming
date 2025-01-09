#include <stdio.h>

// Define an enumeration to represent colors
// Enum constants are assigned custom integer values
enum COLOR
{
    NO_COLOR = 0, // Explicitly set to 0
    RED = 40,     // Explicitly set to 40
    WHITE,        // Implicitly set to 41 (previous value + 1)
    GREEN = 44,   // Explicitly set to 44
    BLACK,        // Implicitly set to 45 (previous value + 1)
    BLUE = 60,    // Explicitly set to 60
    YELLOW        // Implicitly set to 61 (previous value + 1)
};

int main()
{
    // Print the integer values associated with each enum constant
    printf("Value of NO_COLOR: %d\n", NO_COLOR); // Prints 0
    printf("Value of RED: %d\n", RED);           // Prints 40
    printf("Value of WHITE: %d\n", WHITE);       // Prints 41
    printf("Value of GREEN: %d\n", GREEN);       // Prints 44
    printf("Value of BLACK: %d\n", BLACK);       // Prints 45
    printf("Value of BLUE: %d\n", BLUE);         // Prints 60
    printf("Value of YELLOW: %d\n", YELLOW);     // Prints 61

    return 0;
}
