#include <stdio.h>

int main()
{
    int return_value;             // Variable to store the return status of the remove() function
    char *filename = "murr2.jpg"; // File to be removed

    // Attempt to remove the file for the first time
    return_value = remove(filename);
    if (return_value != 0) // Check if the file removal failed
    {
        perror("File Remove Failed"); // Display the error message
        return 1;                     // Exit the program with failure status
    }
    printf("%s removed successfully\n", filename); // Indicate successful file removal

    // Attempt to remove the same file again
    return_value = remove(filename);
    if (return_value != 0) // Since the file no longer exists, this will fail
    {
        perror("File remove failed"); // Display the error message
        return 1;                     // Exit the program with failure status
    }
    printf("%s removed successfully\n", filename); // (Unlikely to execute as the file is already removed)

    return 0; // Indicate successful program termination
}
