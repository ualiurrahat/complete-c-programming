/* for n = 5 , pattern would look like this......
   *    *
    *  *
     *
   *  *
 *      *


 the X symbol...

 */

 #include <stdio.h>

 int main()
 {
     int n,row,col;
     scanf("%d", &n);

     for(row = 1; row <= n; row++)
     {
         for(col = 1; col <= n; col ++)
         {
             if(row ==col || row+col == 6)
             {
                 printf("*");
             }
             else
             {
                 printf(" ");
             }
         }
         printf("\n");

     }

     return 0;

 }

