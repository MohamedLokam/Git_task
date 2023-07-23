#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main()
{
//task 10

int years,weaks,days;
printf("Enter days :   ");
scanf("%d",&days);
years= days/365 ;
weaks= (days%365)/7;
days= days -((years*365)+(weaks*7));
printf("years= %d\n",years);
printf("weaks= %d\n",weaks);
printf("days=%d",days);

    return 0;
}
