#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main()
{

//task 4

int num , n, newnum ;
printf("Enter the number:   ");
scanf("%d",&num);
printf("Enter a position of bit:   ");
scanf("%d",&n);
newnum=(1<<n)|num;
printf("%d",newnum);

    return 0;
}
