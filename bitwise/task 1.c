#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main()
{

//task 1
int num ;
printf("Enter number:   ");
scanf("%d",&num);
        if (num&1)
            {
                printf("The LSB of %d is set(1)",num);

            }
        else
        {

            printf("The LSB of %d is unset(0)", num);
        }

    return 0;
}
