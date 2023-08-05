#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{


// task 8

    double a,b ,result;
    char ch ;

    printf("Enter two number: \n ");
     printf("Enter a process say ( + , - , * , / ):  \n");
    scanf("%.2lf %c %.2lf",&a,&ch,&b);

    switch(ch)
    {
    case '+':
        result = a+b;
        break;
    case '-':
        result = a-b;
        break;
    case '*':
        result = a*b ;
        break;
    case '/':
        result = a/b ;
        break;
    default :
        printf("invalid operator ");

    }
printf("%.2f %c %.2f = ",a,ch,b,result);


    return 0;
}
