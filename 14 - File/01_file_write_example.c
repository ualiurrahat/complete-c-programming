#include <stdio.h> // Include standard I/O library for file operations

int main()
{
    // Declare a file pointer to manage file operations
    FILE *fp;

    // Define the filename as a string to be used for file creation
    char filename[] = "my_file1.txt";

    // Open the file in write mode ("w").
    // If the file does not exist, it will be created.
    // If it exists, its contents will be overwritten.
    fp = fopen(filename, "w");

    // Write content to the file using fprintf
    fprintf(fp, "This is a file created by my program!");
    fprintf(fp, "I am so happy");

    // Close the file to ensure all data is written and resources are released
    fclose(fp);

    return 0; // Indicate successful program termination
}
