#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp_in;                   // File pointer for input file
    char *input_file = "murr.jpg"; // Input file to determine its size

    // Open the input file in binary read mode ("rb")
    fp_in = fopen(input_file, "rb");

    if (fp_in == NULL) // Check if the file opening failed
    {
        perror("File opening failed!!\n"); // Display error message if file doesn't exist
        return EXIT_FAILURE;               // Exit the program with failure status
    }

    // Move the file pointer to the end of the file to calculate its size
    fseek(fp_in, 0, SEEK_END);

    // Print the file size in bytes
    printf("File Size: %ld bytes\n", ftell(fp_in));

    // Print the file size in kilobytes (1 KB = 1024 bytes)
    printf("File Size (KiloByte): %ld\n", ftell(fp_in) / 1024);

    // Close the file after operations
    fclose(fp_in);

    return 0; // Indicate successful program termination
}
