#include <stdio.h>

int main()
{
    // Define and initialize an array of integers
    int ara[] = {1, 4, 6, 8, 9, 11, 14, 15, 20, 25, 33, 83, 87, 97, 99, 100};

    // Define variables to hold the low, high, and mid indexes of the array
    int low_indx = 0;   // Start of the array
    int high_indx = 15; // End of the array (index of the last element)
    int mid_indx;       // Middle index (to be calculated)

    // Define the number to search for in the array
    int num = 97;

    // Binary search algorithm
    while (low_indx <= high_indx) // Continue searching while valid range exists
    {
        // Calculate the middle index
        mid_indx = (low_indx + high_indx) / 2;

        // Check if the middle element matches the target number
        if (num == ara[mid_indx])
        {
            break; // Exit the loop if the number is found
        }

        // If the target number is smaller, search the left half
        if (num < ara[mid_indx])
        {
            high_indx = mid_indx - 1; // Update high index
        }
        else // If the target number is larger, search the right half
        {
            low_indx = mid_indx + 1; // Update low index
        }
    }

    // Check if the number was found in the array
    if (low_indx > high_indx) // If low index exceeds high index, the number is not found
    {
        printf("%d is not in the array\n", num);
    }
    else // The number is found
    {
        printf("%d is found in the array. It is the %dth element.\n", ara[mid_indx], mid_indx);
    }

    return 0; // End of program
}
