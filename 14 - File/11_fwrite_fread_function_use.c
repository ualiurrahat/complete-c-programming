#include <stdio.h>

int main()
{
    // Declare a file pointer
    FILE *file;

    // Declare a variable to hold data
    int data[] = {1, 2, 3, 4, 5};

    // Open a file in binary write mode
    file = fopen("example.bin", "wb");

    // Check if file opened successfully
    if (file == NULL)
    {
        printf("Error opening file for writing.\n");
        return 1;
    }

    // Write data to the file using fwrite()
    // Syntax: size_t fwrite(const void *ptr, size_t size, size_t count, FILE *stream);
    // Parameters:
    //   ptr   -> Pointer to the data to write
    //   size  -> Size of each element to write
    //   count -> Number of elements to write
    //   stream-> Pointer to the file
    // Returns:
    //   Number of elements successfully written
    size_t result = fwrite(data, sizeof(int), 5, file);

    // Check if fwrite was successful
    if (result != 5)
    {
        printf("Error writing to file.\n");
        return 1;
    }

    // Close the file after writing
    fclose(file);

    // Reopen the file in binary read mode
    file = fopen("example.bin", "rb");

    // Check if file opened successfully
    if (file == NULL)
    {
        printf("Error opening file for reading.\n");
        return 1;
    }

    // Declare a variable to hold the data read from the file
    int readData[5];

    // Read data from the file using fread()
    // Syntax: size_t fread(void *ptr, size_t size, size_t count, FILE *stream);
    // Parameters:
    //   ptr   -> Pointer to where the read data should be stored
    //   size  -> Size of each element to read
    //   count -> Number of elements to read
    //   stream-> Pointer to the file
    // Returns:
    //   Number of elements successfully read
    result = fread(readData, sizeof(int), 5, file);

    // Check if fread was successful
    if (result != 5)
    {
        printf("Error reading from file.\n");
        return 1;
    }

    // Display the data read from the file
    printf("Data read from file: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", readData[i]);
    }
    printf("\n");

    // Close the file after reading
    fclose(file);

    return 0;
}
