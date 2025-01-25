// find out largest numbers among three.

//this code was my first own code.

#include <stdio.h>

int main()
{
    int a,b,c;
    int n;
    int i;

    printf("how many times you wanna run the code: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("enter the value of a,b,c:");
        scanf("%d %d %d", &a, &b, &c);

        if( a >= b && a > c)
        {
        printf(" largest is %d\n",a);
        }
        else if( b > a && b >= c){
        printf("largest is %d\n",b);
        }
        else if(c >= a && c > b) {
        printf("largest is %d\n",c);
        }
        else  {
        printf("all are equal");
        }


    }

    return 0;
}
