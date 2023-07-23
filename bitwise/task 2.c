#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main()
{

// task 3
int num , nth, status;
printf("enter a num:    ");
scanf("%d",&num);
printf("Enter the nth bit  :  ");
scanf("%d",&nth);

status = (num>>nth)&1;
printf("the status of %d bit is %d ",nth,status);


    return 0;
}
