// calcualte the sum of natural numbers
// starting from 1 to n
// ex: sum of numbers up to 5 is, 1+2+3+4+5 = 15
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the nth number: ");
    scanf("%d", &n);
    int sum = (n * (n + 1)) / 2;
    printf("Sum of numbers from 1 to %d is = %d\n", n, sum);
    return 0;
}