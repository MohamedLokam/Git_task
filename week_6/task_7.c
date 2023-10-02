

#include <stdio.h>
#include <stdlib.h>

long long int fact( int num);


int main()
{
    int c;
    long long int x ;
    printf("Enter number:  ");
    scanf("%d",&c);
     x = fact(c);
    printf("%lld",x);

    return 0;
}

long long int fact( int num)
{
    if(num==0)
    {
        return 1;
    }

    else
    {
         return num * fact(num-1) ;
    }

}

