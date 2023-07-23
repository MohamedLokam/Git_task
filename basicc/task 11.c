#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main()
{
//task11

 double x,y,result ;
printf("Enter a num");
scanf("%lf",&x);
printf("Enter a expo");
scanf("%lf",&y);
result = pow(x,y);
printf("power=%.2lf",result);


    return 0;
}
