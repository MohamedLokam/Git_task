#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    //task 10


    long long num ;
    int count=0 ;
    printf("enter a number ");
    scanf("%lld",&num);
    do{
        count++;
        num=num/10 ;
    }
    while(num!=0);

    printf("%d",count);




    return 0;
}
