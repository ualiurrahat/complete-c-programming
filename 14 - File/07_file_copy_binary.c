#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Declare file pointers for input and output files
    FILE *fp_in, *fp_out;

    // Define the input file name and output file name
    char *input_file = "murr.jpg";         // Input file to be copied
    char *output_file = "murr_output.jpg"; // Output file where the content will be copied

    int ch; // Variable to hold each character read from the input file

    // Open the input file in binary read mode ("rb")
    fp_in = fopen(input_file, "rb");
    if (fp_in == NULL) // Check if file opening failed
    {
        perror("File opening failed.\n"); // Display error message
        return EXIT_FAILURE;              // Exit the program with failure status
    }

    // Open the output file in binary write mode ("wb")
    fp_out = fopen(output_file, "wb");

    // Read and write each character from the input file to the output file
    while (1)
    {
        ch = fgetc(fp_in); // Read a character from the input file
        if (ch == EOF)     // If End of File is reached, break the loop
        {
            break;
        }
        fputc(ch, fp_out); // Write the character to the output file
    }

    // Close the input file
    fclose(fp_in);

    // Close the output file
    fclose(fp_out);

    return 0; // Indicate successful program termination
}
