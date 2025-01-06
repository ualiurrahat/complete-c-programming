#include <stdio.h>

// Function to demonstrate recursion using a static variable
void recurse()
{
    // Static variable 'count' retains its value between function calls.
    static int count = 1;

    // Base case: If 'count' exceeds 5, stop the recursion
    if (count > 5)
    {
        return; // Exit the function when the base condition is met
    }

    // Print the current value of 'count'
    printf("Count = %d\n", count);

    // Increment 'count' before making the next recursive call
    count++;

    // Recursive call: Call the function again with the updated 'count'
    recurse();
}

int main()
{
    // Start the recursive function
    recurse();

    return 0; // Indicate successful program termination
}
