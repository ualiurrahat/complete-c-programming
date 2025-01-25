#include <stdio.h>

int main()
{
    char ch;
    printf("enter any character:");
    scanf("%c", &ch);

    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("vowel\n");
            break;

        default:
            printf("consonant");
    }

    return 0;
}
