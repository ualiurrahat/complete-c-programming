/*
 * An enum (enumeration) is a user-defined data type in C that assigns names
 * to a set of integer constants. It makes the code more readable and helps
 * in managing related constant values more effectively.
 *
 * Syntax:
 * enum EnumName {
 *     CONST1,  // Assigned value 0 by default
 *     CONST2,  // Assigned value 1 by default
 *     CONST3 = 5, // Explicitly assigned value 5
 *     CONST4    // Automatically assigned value 6 (next integer after CONST3)
 * };
 * Size: On a 32-bit or 64-bit platform: Size of enum variable: 4 bytes
 */
#include <stdio.h>

// Define an enumeration to represent colors
enum COLOR
{
    RED,   // 0
    GREEN, // 1
    BLUE   // 2
};

int main()
{
    // Declare a variable of enum type to hold the selected color
    enum COLOR selected_color;

    // Variable to store user input
    int num;

    // Prompt the user to select a color
    printf("Enter 1 for RED, 2 for GREEN, 3 for BLUE: ");
    scanf("%d", &num);

    // Map user input to the corresponding color
    if (num == 1)
    {
        selected_color = RED; // RED is selected
    }
    else if (num == 2)
    {
        selected_color = GREEN; // GREEN is selected
    }
    else if (num == 3)
    {
        selected_color = BLUE; // BLUE is selected
    }

    // Print the selected color as its integer value
    printf("Selected color: %d\n", selected_color);

    // Print the integer values associated with the enum constants
    printf("Enum values - RED: %d, GREEN: %d, BLUE: %d\n", RED, GREEN, BLUE);
    printf("Size of enum values: Red size = %d, Green size = %d, Blue size = %d\n", sizeof(RED), sizeof(GREEN), sizeof(BLUE));

    return 0;
}
