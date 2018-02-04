#include <stdio.h>

int main ()
{
    int var = 20;
    int  *ptr ;
   
   ptr = &var;

   printf("The value of ptr is : %x\n", ptr  );
 
   return 0;
}