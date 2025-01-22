/* in previous code, we read two integers that were
written in two lines. here, we will read two integers from input file
these integers are written in same line with a space between them
*/

#include <stdio.h> // Include standard I/O library for file operations

int main()
{
    // Declare file pointers for input and output files
    FILE *fp_in, *fp_out;

    // Define the names of the input and output files
    char *input_file = "05_input.txt";
    char *output_file = "05_output.txt";

    // Buffer to store a line of text from the input file
    char line[80];

    // Variables to store two integers and their sum
    int num1, num2, sum;

    // Open the input file in read mode ("r") to read data
    fp_in = fopen(input_file, "r");

    // Open the output file in write mode ("w") to write data
    fp_out = fopen(output_file, "w");

    // Read a single line of text from the input file
    fgets(line, 80, fp_in);

    // Display the line read from the input file on the console
    printf("Line: %s\n", line);

    // Extract two integers from the line using sscanf
    sscanf(line, "%d %d", &num1, &num2);

    // Calculate the sum of the two integers
    sum = num1 + num2;

    // Display the result on the console
    printf("%d + %d = %d\n", num1, num2, sum);

    // Write the sum to the output file
    fprintf(fp_out, "%d\n", sum);

    // Close both files to ensure all operations are completed and resources are released
    fclose(fp_in);
    fclose(fp_out);

    return 0; // Indicate successful program termination
}
