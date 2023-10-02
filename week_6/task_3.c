#include <stdio.h>
#include <stdlib.h>

int max(int max_1,int max_2);
int min(int min_1,int min_2);

int main()
{
    int x,y,num_1,num_2;
    printf("Enter two number:  ");
    scanf("%d %d",&num_1,&num_2);
    x=max(num_1,num_2);
    y=min(num_1,num_2);
    printf("max=%d\n",x);
    printf("min=%d\n",y);

    return 0;
}

int max(int max_1,int max_2)
{
    int x ;
    if(max_1>max_2)
        x=max_1;
    else
        x=max_2;
    return x;


}
int min(int min_1,int min_2)
{
    int x ;
    if(min_1>min_2)
        x=min_2;
    else
        x=min_1;
    return x;
}
