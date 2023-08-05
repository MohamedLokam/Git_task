#include <stdio.h>
#include <stdlib.h>

int main()
{
   // task 16  Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.

   int  a , b ,c ;
   printf("enter three side :    ");
   scanf("%d%d%d",&a,&b,&c);
   if(a==b && a==c && b==c)
    printf("the triangle is equilateral");
   else if(a==b || a==c || b==c)
    printf("the triangle is isosceles");
   else
    printf("the triangle is scalene");





    return 0;
}
