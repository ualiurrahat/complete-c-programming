#include <stdio.h>
int main()
{
    // Initialize two strings to be concatenated and a result string
    char str1[] = "bangla", str2[] = "desh", str3[12];

    // Declare variables for indexing and define string lengths
    int i, j, length1 = 6, length2 = 4;

    // Copy characters from str1 to str3
    for (i = 0, j = 0; i < length1; i++, j++)
    {
        str3[j] = str1[i];
    }

    // Copy characters from str2 to str3 after str1
    for (i = 0; i < length2; i++, j++)
    {
        str3[j] = str2[i];
    }

    // Add null terminator at the end of the concatenated string
    str3[j] = '\0';

    // Print the concatenated string
    printf("%s\n", str3);

    return 0; // Exit the program successfully
}
