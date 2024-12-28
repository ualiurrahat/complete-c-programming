#include <stdio.h>

// Function prototype declaration
// Syntax: return_type function_name(parameters)
// This informs the compiler about the function's name, return type, and parameters before its usage.
double add(double x, double y);

int main()
{
    // Variable declarations and initialization
    double a = 2.8, b = 2.7, c;

    // Function call: Passing 'a' and 'b' to the add function and storing the result in 'c'
    c = add(a, b);

    // Print the result of the addition
    printf("%lf\n", c);

    return 0; // Indicate that the program ended successfully
}

// Function definition: Adds two double values and returns their sum
double add(double n1, double n2)
{
    double sum = n1 + n2; // Calculate the sum of n1 and n2
    return sum;           // Return the calculated sum
}
