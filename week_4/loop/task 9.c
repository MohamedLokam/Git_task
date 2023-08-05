#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
     //task 9



    int a ;
    printf("enter any num");
    scanf("%d",&a);
    for(int i=1;i<13;i++)
    {
        int mul= a*i;
        printf("%d*%d=%d\n",a,i,mul);
    }



    return 0;
}
