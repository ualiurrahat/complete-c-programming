// Program to find the maximum element inside an array
#include <stdio.h>

// Function prototype for finding the maximum element
int find_max(int ara[], int n);

int main()
{
    // Input array and its size
    int ara[] = {100, 0, 53, 22, 83, 23, 89, 132, 201, 3, 85};
    int n = 11;

    // Print the input array
    printf("Input Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ara[i]);
    }
    printf("\n");

    // Call the function to find the maximum element and store the result
    int max = find_max(ara, n);

    // Print the maximum element
    printf("Max element: %d\n", max);

    return 0; // Indicate successful program termination
}

// Function definition: Finds the maximum element in an array
int find_max(int ara[], int n)
{
    int max = ara[0]; // Initialize 'max' with the first element of the array

    // Iterate through the array to find the maximum element
    for (int i = 1; i < n; i++)
    {
        if (ara[i] > max) // Update 'max' if a larger element is found
        {
            max = ara[i];
        }
    }

    return max; // Return the maximum element
}
