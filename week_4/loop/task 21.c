#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{


//task 21

    long long power= 1 ;
    int base , exponent;
    printf("enter the base");
    scanf("%d",&base);
      printf("enter the exponent");
    scanf("%d",&exponent);
    for(int i=1 ; i<=exponent; i++)
    {
        power=power*base;
    }
    printf("%d^%d=%d",base,exponent,power);









    return 0;
}
