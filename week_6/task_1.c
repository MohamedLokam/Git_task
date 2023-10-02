#include <stdio.h>
#include <stdlib.h>

long int cube(int num);
int main()
{
    int num_1;
    printf("enter the number:  ");
    scanf("%d",&num_1);
    long int numf = cube(num_1);
    printf("cube of %d = %ld",num_1,numf);
    return 0;
}
long int cube(int num)
{
    return (num*num*num);
}
