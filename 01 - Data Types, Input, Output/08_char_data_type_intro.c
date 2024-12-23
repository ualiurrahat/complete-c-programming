#include <stdio.h>

int main()
{
    char ch;
    char c;
    printf("Enter the first letter of your name: ");
    scanf("%c", &ch); // Reads the first character
    printf("First letter of your name is : %c\n", ch);

    // Using getchar() function to get user input
    getchar(); // Consume the leftover newline character
    printf("Enter the second letter of your name: ");
    c = getchar(); // Now reads the actual second character
    printf("Second character is : %c\n", c);

    return 0;
}
