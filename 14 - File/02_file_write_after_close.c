#include <stdio.h> // Include standard I/O library for file operations

int main()
{
    // Declare a file pointer to manage file operations
    FILE *fp;

    // Define the filename to be used for file creation
    char filename[] = "my_file2.txt";

    // Open the file in write mode ("w").
    // If the file does not exist, it will be created.
    // If it exists, its contents will be overwritten.
    fp = fopen(filename, "w");

    // Write content to the file using fprintf
    fprintf(fp, "This is a file created by my program!");
    fprintf(fp, "I am so happy.");

    // Close the file to release resources and finalize writes
    fclose(fp);

    // Attempting to write to the file after it has been closed
    // This operation will not work, as the file pointer is no longer valid
    fprintf(fp, " Second line.\n"); // This will cause undefined behavior

    return 0; // Indicate successful program termination
}
