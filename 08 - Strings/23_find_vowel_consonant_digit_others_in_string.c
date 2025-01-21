#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    int i, vowel, consonant, digit, word, other, ch;
     i = vowel = consonant = digit = word = other = 0;


    printf("enter your string: \n");
    gets(str);

    while((ch=str[i]) != '\0')
    {
        if(ch =='a' || ch == 'e'|| ch == 'i' || ch == 'o' || ch == 'u' ||
        ch =='A' || ch == 'E'|| ch == 'I' || ch == 'O' || ch == 'U'
            )
            vowel++;

        else if(( ch >= 'a' && ch <= 'z' ) || (ch >= 'A' && ch <= 'Z'))
            consonant++;

        else if(ch >= '0' && ch <= '9')
            digit++;


        else if(ch == ' ')
            word++;

        else
            other++;

        i++;
    }

    word++;

    printf("vowel = %d\n", vowel);
    printf("consonant = %d\n", consonant);
    printf("digit = %d\n", digit);
    printf("word = %d\n", word);
    printf("other = %d\n", other);

    return 0;
}




