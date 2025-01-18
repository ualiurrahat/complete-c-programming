#include <stdio.h>

int main()
{
    char name[3][10] = {"ahnaf","hafsa","aayash"};
    int i;


    for(i = 0; i < 3; i++){
        printf("%s\n", name[i]);
    }
    return 0;
}
