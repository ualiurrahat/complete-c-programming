#include <stdio.h>

// Function to demonstrate the difference between automatic (local) and static variables
void func()
{
    // Automatic (local) variable 'a' is declared and initialized to 10.
    // Its value is reset every time the function is called.
    int a = 10;

    // Static variable 's' is declared and initialized to 10.
    // Static variables retain their value across function calls and are initialized only once.
    // local static variable can't be access outside the function it was declared.
    // static var is saved in the memory as log as the program runs.
    static int s = 10;

    // Increment both variables by 2
    a = a + 2;
    s = s + 2;

    // Print the current values of 'a' and 's'
    printf("a = %d, s = %d\n", a, s);
}

int main()
{
    // Call the function 'func' three times
    func(); // First call
    func(); // Second call
    func(); // Third call

    return 0; // Indicate successful program termination
}
