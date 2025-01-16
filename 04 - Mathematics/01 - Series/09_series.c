// series: 1 - 2 + 3 - 4 + 5 - 6 = ?
// means:(1 + 3 + 5 + ...) - (2 + 4 + 6 +.....)


#include <stdio.h>

int main()
{
    int n, even = 0, odd = 0;
    printf("enter the last digit of the series:");
    scanf("%d", &n);

    int i;

    for(i = 1; i <= n; i++){
        if(i % 2 == 0){
            even = even + i;
        }
        else {
            odd = odd + i;
        }
    }
    printf("sum is %d\n", odd - even);

    return 0;
}

