#include <stdio.h>
#include <stdlib.h>

int main()
{
   //task 14

   int a , b ,c ;
   printf("enter three angles:    ");
   scanf("%d%d%d",&a,&b,&c);
   int sum = a+b+c ;
   if (a>0 && b>0 && c>0 && sum==180)
   {
       printf("valid");
   }
   else
   {
       printf("invalid, try again");
   }



    return 0;
}
