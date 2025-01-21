#include <stdio.h>
#include <string.h>

int main()
{
    char name[] = "Ahnaf Hafsa";

    strupr(name); // converts all strings into capital letters.
    printf("str_upper : %s\n", name);

    strlwr(name); // converts all strings into lower letters.
    printf("str_lower : %s\n", name);

    return 0;
}
