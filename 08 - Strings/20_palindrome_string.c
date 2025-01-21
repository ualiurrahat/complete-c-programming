// palindrome: real thing = reverse of the real thing.
// ex: madam etc.

#include <stdio.h>
#include <string.h>

int main()
{
    // input for original string
      char real[100];
    printf("enter your text: ");
    gets(real);

    // reversing the string.
    int len = strlen(real);
    int i = 0, j = 0;
    char rev_str[100];

    for(i = len-1, j = 0; i >= 0, j < len; i--, j++)
    {
        rev_str[j] = real[i];
    }
    rev_str[j] = '\0';

    // printing strings.
    printf("\n");
    printf("original string : %s\n", real);
    printf("reversed string :%s\n", rev_str);

    // palindrome check.

    int d = strcmp(real, rev_str);

    if(d == 0)
    {
        printf("palindrome strings\n");
    }
    else
    {
        printf("not palindrome\n");
    }

    return 0;
}
