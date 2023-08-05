#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{



//task 15

    long long num ;
    int product= 1 ;
    printf("enter a number ");
    scanf("%lld",&num);
     product = (num == 0 ? 0 : 1);
    while(num !=0)
    {
        product=product * (num%10) ;
        num = num/10 ;
    }
       printf("product = %d",product);






    return 0;
}
