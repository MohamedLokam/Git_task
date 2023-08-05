#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{






//task 40

    long long num_binary , decimal=0 ;
    int n=0;

 puts("Enter a binary ");
    scanf("%lld",&num_binary);
    while ( num_binary!=0)
    {
        if (num_binary %10 ==1)
        {
            decimal+=pow(2,n);
        }

        n++;
        num_binary/=10;

    }
    printf("decimal =%lld ",decimal);
















    return 0;
}
