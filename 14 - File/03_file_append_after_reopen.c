#include <stdio.h> // Include standard I/O library for file operations

int main()
{
    // Declare a file pointer to manage file operations
    FILE *fp;

    // Define the filename to be used for file creation and appending
    char filename[] = "my_file3.txt";

    // Open the file in write mode ("w").
    // If the file does not exist, it will be created.
    // If it exists, its contents will be overwritten.
    fp = fopen(filename, "w");

    // Write initial content to the file
    fprintf(fp, "This is a file created by my program! ");
    fprintf(fp, " I am so happy.\n");

    // Close the file to ensure all writes are finalized
    fclose(fp);

    // Reopen the file in append mode ("a").
    // This mode allows adding data to the end of the file
    // without modifying its existing contents.
    fp = fopen(filename, "a");

    // Write additional content to the file, appending to the existing data
    fprintf(fp, "Second Line.\n");

    // Close the file after appending
    fclose(fp);

    return 0; // Indicate successful program termination
}
