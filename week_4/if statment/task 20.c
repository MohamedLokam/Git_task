#include <stdio.h>
#include <stdlib.h>

int main()
{
    // task 20

float salary;
float da,hra;
printf("Enter your basic salary");
scanf("%f",&salary);
if (salary<=10000)
{
    da=0.8;
    hra=0.2;
}
else if (salary<=20000)
{
    da=0.9;
    hra=0.25;
}
else
{
    da=.95;
    hra=.3;
}
float gross_salary = salary+(salary*da)+(salary*hra) ;
printf("Gross salary = %0.1f",gross_salary);







    return 0;
}
