#include <stdio.h>

int main()
{
    char n;
    printf(" Enter any ASCII character:");
    scanf("%c", &n);

    printf("The ASCII  value is %d\n", n);

    int m;
    printf(" Enter any ASCII value:"); // ascii value varies from 65 to 122

    scanf("%d", &m);

    printf("The ASCII character value is %c", m);

    return 0;
}
