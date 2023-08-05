#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{



//task 16

    int num , reverse =0;
    puts("Enter a number ");
    scanf("%d",&num);
    while (num !=0)
    {
        reverse=reverse*10+(num%10);
        num=num/10;


    }
printf("%d",reverse);












    return 0;
}
