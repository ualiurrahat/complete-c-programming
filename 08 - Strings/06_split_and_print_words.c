#include <stdio.h>
#include <string.h>

int main()
{
    // Declaring variables:
    // `s` stores the input sentence.
    // `word` is used to process each word (not utilized in this solution but declared).
    // `ch` is used for character manipulation.
    // `i` is a loop variable.
    // `length` stores the length of the input string.
    // `is_word_started` is a flag to track if a word is currently being processed.
    char s[1002], word[100], ch;
    int i, length, is_word_started;

    // Prompting user for input
    printf("Enter your sentence: ");
    gets(s); // Reads the entire sentence, including spaces.

    // Calculating the length of the input string
    length = strlen(s);

    // Initializing the flag to indicate that no word has started yet
    is_word_started = 0;

    // Loop through each character of the input string
    for (i = 0; i < length; i++)
    {
        // Check if the current character is a lowercase letter
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            // If a word has not started, initialize a new word
            if (is_word_started == 0)
            {
                is_word_started = 1; // Mark that a word has started
                // Convert the first character to uppercase
                ch = 'A' + s[i] - 'a';
                printf("%c", ch);
            }
            else
            {
                // If the word has already started, print the character as is
                printf("%c", s[i]);
            }
        }
        // Check if the character is an uppercase letter or a digit
        else if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))
        {
            // Start a new word if it hasn't already started
            if (is_word_started == 0)
            {
                is_word_started = 1; // Mark that a word has started
            }
            // Print the character as is
            printf("%c", s[i]);
        }
        // If the character is a punctuation mark or a space
        else
        {
            // End the current word if one is in progress
            if (is_word_started == 1)
            {
                is_word_started = 0; // Mark that the word has ended
                printf("\n");        // Move to the next line for the next word
            }
        }
    }

    // Print a newline at the end for clean formatting
    printf("\n");
    return 0; // Indicate successful execution
}
