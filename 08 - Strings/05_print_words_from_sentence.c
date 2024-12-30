#include <stdio.h>
#include <string.h>

int main()
{
    char s[1002], word[100]; // Array to store the sentence and individual words
    int i, j, length, is_word_started;

    printf("Enter your sentence: ");
    gets(s); // Read the sentence from the user

    // Get the length of the entire string
    length = strlen(s);

    // Initialize flag variable to check if a word has started
    // 0 means no word is being processed, 1 means a word is being processed
    is_word_started = 0;

    // Loop through the entire string
    for (i = 0, j = 0; i < length; i++)
    {
        // Check if the character is a lowercase letter
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            // Start a new word if not already in progress
            if (is_word_started == 0)
            {
                is_word_started = 1;
                // Capitalize the first letter of the word
                word[j] = 'A' + s[i] - 'a';
                j++;
            }
            else
            {
                // Add the character to the current word
                word[j] = s[i];
                j++;
            }
        }
        // Check if the character is an uppercase letter
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            if (is_word_started == 0)
            {
                is_word_started = 1;
            }
            word[j] = s[i];
            j++;
        }
        // Check if the character is a digit
        else if (s[i] >= '0' && s[i] <= '9')
        {
            if (is_word_started == 0)
            {
                is_word_started = 1;
            }
            word[j] = s[i];
            j++;
        }
        // Handle invalid characters such as spaces and punctuation
        else
        {
            // If a word was in progress, end it
            if (is_word_started == 1)
            {
                is_word_started = 0;
                word[j] = '\0';       // Null-terminate the word
                printf("%s\n", word); // Print the word
                j = 0;                // Reset the word index
            }
        }
    }

    // Check for and print the last word if it exists
    if (is_word_started == 1)
    {
        word[j] = '\0';
        printf("%s\n", word);
    }

    return 0;
}
