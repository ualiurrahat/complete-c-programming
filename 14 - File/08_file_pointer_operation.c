#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Open the file "08_input.txt" in read mode
    FILE *fp = fopen("08_input.txt", "r");
    if (fp == NULL) // Check if the file opening failed
    {
        perror("Can't open file.\n"); // Display error message if file doesn't exist
        return EXIT_FAILURE;          // Exit the program with failure status
    }

    int ch; // Variable to hold the character read from the file

    // Read and print the first character from the file
    ch = fgetc(fp);
    printf("%c\n", (char)ch); // Expected output: 'A'

    // Read and print the second character from the file
    ch = fgetc(fp);
    printf("%c\n", (char)ch); // Expected output: 'B'

    // Reset the file pointer to the beginning using fseek(fp, 0, 0)
    fseek(fp, 0, 0);
    ch = fgetc(fp);
    printf("%c\n", (char)ch); // Expected output: 'A'

    // Reset the file pointer to the beginning using fseek(fp, 0, SEEK_SET)
    fseek(fp, 0, SEEK_SET);
    ch = fgetc(fp);
    printf("%c\n", (char)ch); // Expected output: 'A'

    // Move the file pointer to the current position using fseek(fp, 0, SEEK_CUR)
    fseek(fp, 0, SEEK_CUR);
    ch = fgetc(fp);
    printf("%c\n", (char)ch); // Expected output: 'B'

    // Move the file pointer forward by 3 characters and read the next character
    fseek(fp, sizeof(char) * 3, SEEK_CUR); // Move 3 characters ahead from current position
    ch = fgetc(fp);
    printf("%c\n", (char)ch); // Expected output: 'F'

    // Move the file pointer to the end of the file using fseek(fp, 0, SEEK_END)
    fseek(fp, 0, SEEK_END); // At the end, no more characters to read
    ch = fgetc(fp);
    printf("%c\n", (char)ch); // Expected output: empty or EOF (-1)

    // Close the file
    fclose(fp);

    return 0;
}
