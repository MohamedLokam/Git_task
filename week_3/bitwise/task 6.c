#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main()
{

//task 6

int num , n,p, newnum;
printf("Enter the number:   ");
scanf("%d",&num);
printf("Enter a position of bit to toggle:   ");
scanf("%d",&n);

p=(1<<n);
newnum=(p^num);
printf("the new num = %d",newnum);



    return 0;
}
