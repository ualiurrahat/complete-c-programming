/*We will take two integes from input file and then write the sum
in another file*/

#include <stdio.h> // Include standard I/O library for file operations

int main()
{
    // Declare file pointers for input and output files
    FILE *fp_in, *fp_out;

    // Define the names of the input and output files
    char *input_file = "04_input.txt";
    char *output_file = "04_output.txt";

    // Variables to store two integers and their sum
    int num1, num2, sum;

    // Open the input file in read mode ("r") to read data
    fp_in = fopen(input_file, "r");

    // Open the output file in write mode ("w") to write data
    fp_out = fopen(output_file, "w");

    // Read two integers from the input file
    fscanf(fp_in, "%d", &num1);
    fscanf(fp_in, "%d", &num2);

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
