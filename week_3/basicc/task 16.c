#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main()
{
//task 16


double p,t,r,si;
printf("Enter P:   ");
scanf("%lf",&p);
printf("Enter T:   ");
scanf("%lf",&t);
printf("Enter R:   ");
scanf("%lf",&r);

si=(p*t*r)/100;
printf("SI=   %.2lf",si);


    return 0;
}
