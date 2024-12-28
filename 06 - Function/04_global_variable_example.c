#include <stdio.h>

// Global variable declaration and initialization
double pi = 3.14;

// Function definition: Modifies the global variable 'pi'
void my_fnc()
{
    pi = 3.1416; // Update the value of the global variable 'pi'
    return;      // Return from the function (optional for void functions)
}

int main()
{
    // Print the initial value of the global variable 'pi'
    printf("% lf\n", pi);

    // Call the function to modify the global variable
    my_fnc();

    // Print the updated value of the global variable 'pi'
    printf("% lf\n", pi);

    return 0; // Indicate successful program termination
}
