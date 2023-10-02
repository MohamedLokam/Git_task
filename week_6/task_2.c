#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double diameter(double radius_1);
double circumference (double radius_2);
double area (double radius_3);
int main()
{
    double rad_1 ,a ,b,c;
    printf("Enter a radius:   ");
    scanf("%lf",&rad_1);
    a=diameter(rad_1);
    b=circumference (rad_1);
    c=area (rad_1);
    printf("Diameter = %.2lf\n",a);
    printf("circumference = %.2lf\n",b);
    printf("area = %.2lf\n",c);

    return 0;
}
double diameter(double radius_1)
{
    return(radius_1*2);
}


double circumference (double radius_2)
{
    return(2*M_PI*radius_2);
}


double area (double radius_3)
{
    return(M_PI*radius_3*radius_3);
}
