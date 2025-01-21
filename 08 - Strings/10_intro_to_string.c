/* string: array of char type variable

*/

#include <stdio.h>

int main()
{
   char n[6];
   n[0] = 'r';
   n[1] = 'a';
   n[2] = 'h';
   n[3] = 'a';
   n[4] = 't';
   n[5] = '\0';

    // note : take one extra char for null characters. here rahat has 5 chars. but we took 6 for null char.

   char a[] = {'r', 'a', 'h', 'a', 't', '\0'};// no need to tell the size when initialized value directly.

   char m[] = "rahat";

   // line breaking character.

   char name[] = "MD. Ualiur Rahman \
Rahat";

   printf("%s\n",n);
   printf("%s\n", a);
   printf("%s\n", m);
   printf("%s\n", name);

    return 0;
}
