#include <stdio.h>
#include <stdlib.h>

int main()
{
int i=0;
   char a[20];
   printf("Input the string: ");
   gets(a);
   while(a[i]!='\0')
   {


    i++;
   }

   printf("\nLength of string is: %d\n",i);
    return 0;

}
