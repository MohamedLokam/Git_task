#include <stdio.h>
#include <stdlib.h>
int SomeofDigit(int num);



int main()
{
    int a;
    printf("enter the number:     ");
    scanf("%d",&a);
    int x = SomeofDigit(a);
    printf("sum digits = %d ",x);
}

int SomeofDigit(int num)
{
    int sum=0;
    if(num==0)
        return;
    else
    {
        return ((sum+num%10)+SomeofDigit(num/10));
    }

}
