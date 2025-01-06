#include <stdio.h>

// Global variable 'a' is declared and initialized to 0 by default.
// Global variables are accessible throughout the entire program.
int a;

// Static global variable 'b' is declared and initialized to 0 by default.
// Static variables retain their values across function calls and are limited to the file scope.
static int b;
/*NOTE: Static variable can be declared in two spaces
1. in global scope -> out of any function
2. in function scope -> inside any function

*/
// Function to increment the values of global and static variables
void func()
{
    // Increment the global variable 'a' by 1
    a = a + 1;

    // Increment the static global variable 'b' by 1
    b = b + 1;
}

int main()
{
    // Call the function 'func' to update the variables
    func();

    // Print the current value of the global variable 'a'
    printf("a = %d\n", a);

    // Print the current value of the static global variable 'b'
    printf("b = %d\n", b);

    return 0; // Indicate successful program termination
}
