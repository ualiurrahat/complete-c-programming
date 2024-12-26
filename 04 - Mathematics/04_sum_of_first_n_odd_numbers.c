// calculate and print the sum of first n positive odd numbers.
// ex: sum of first 4 odd numbers
// 1+3+5+7 = 16 = 4^2 = n^2

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the nth odd number: ");
    scanf("%d", &n);
    int sum = n * n;
    printf("Sum of first %dth positive odd numbers are: %d\n", n, sum);
    return 0;
}