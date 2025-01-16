#include <stdio.h>

int main()
{
    int n;
    printf("enter last number of series:\n");
    scanf("%d", &n);

   int fibo[n];
   fibo[0] = 1;
   fibo[1] = 1;
   int i = 2;

   for(i = 2; i <= n; i++)
   {
       fibo[i] = fibo[i-1] + fibo[i-2];

   }
   for(i = 0; i <= n; i++)
   {
       printf("fibo[%d]  \t = %d\n", i, fibo[i]);
   }

  // printf("fibo[%d] = %d\n", n, fibo[n]);



    return 0;
}

