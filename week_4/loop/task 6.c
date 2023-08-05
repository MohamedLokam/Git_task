#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
     //task 6

    int a ;
    int sum=0;
    printf("enter a last number");
    scanf("%d",&a);


    for (int i=1;i<=a;i++)
    {
        sum=sum+i ;
    }
    printf("%d",sum);




    return 0;
}
