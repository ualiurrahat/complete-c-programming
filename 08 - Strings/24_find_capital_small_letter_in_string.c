#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    int i, cap, small,ch;
    i = cap = small  = 0;



    printf("enter your string: \n");
    gets(str);

    while((ch = str[i]) != '\0')
    {
        if(ch >= 'A' && ch <= 'Z')
            cap++;

        else if (ch >= 'a' && ch <= 'z')
            small++;

        i++;

    }

    printf("capital letter = %d\n", cap);
    printf("small letter = %d\n", small);

    return 0;
}
