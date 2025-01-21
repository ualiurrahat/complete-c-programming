// swap two strings within each other.


/* strcpy():This function copies the entire string to the destination string.
 It doesn’t append the source string to the destination string.
  In other words, we can say that it replaces the content of destination string by the content of source string.
  */

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100] = "rahat";
    char str2[100] = "mentalist";
    char temp[100];

    strcpy(temp, str1); // temp = rahat;
    strcpy(str1, str2); // str1 = mentalist....rahat got replaced by mentalist.
    strcpy(str2, temp); // str2 = rahat


    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);

    return 0;
}
