// Program to add two numbers using a function in C
#include <stdio.h>

// Function to add two numbers
// Takes two double values as input and returns their sum
double add(double n1, double n2)
{
    double sum = n1 + n2; // Calculate the sum of n1 and n2
    return sum;           // Return the calculated sum
}

int main()
{
    double a, b, c; // Variables to store input numbers and the result
    a = 2.8;        // Assigning value to the first number
    b = 2.7;        // Assigning value to the second number
    c = add(a, b);  // Calling the add function and storing the result in 'c'

    // Print the result of the addition
    printf("%lf\n", c);

    return 0; // Indicate that the program ended successfully
}
