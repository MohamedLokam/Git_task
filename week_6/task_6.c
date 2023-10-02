#include <stdio.h>
#include <stdlib.h>

void printprimes(int lower,int upper);
int isprime(int num);
int main()
{
    int lower_limit,upper_limit;

    printf("Hello world!\n");
    printf("enter a range from number to another \n");
    scanf("%d%d",&lower_limit,&upper_limit);
    printprimes( lower_limit, upper_limit);

    return 0;
}

void printprimes(int lower,int upper)
{
    while(lower<=upper)
    {
        if(isprime(lower))
        {
            printf("%d,  ",lower);
        }
        lower++;
    }
}


int isprime(int num)
{
    for(int i=2; i<=num/2;i++)
    {
        if(num%i==0)
        {
            return 0;
        }
    }
    return 1;
}
