// find and print the length of a string
#include <stdio.h>

// function to calculate string length
int string_length(char str[])
{
    int length = 0;
    for (int i = 0; i < str[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}
int main()
{
    char str[100];
    int length;
    while (1 == scanf("%s", str))
    {
        printf("String: %s\n", str);
        length = string_length(str);
        printf("Length: %d\n", length);
    }
    // NOTE: use ctrl+z to end the program run.
    return 0;
}