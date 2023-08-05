#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{



    //task 7
    double a,b,c;
    double root1,root2,discriminant;
    double imaginary;
    printf("Enter quadratic equation coefficients :  ");
    scanf("%lf%lf%lf",&a,&b,&c);

    discriminant=(b*b)-(4*a*c);

        switch (discriminant>0)
        {
        case 1 :
            root1=(-b+sqrt(discriminant))/2*a ;
            root2=(-b-sqrt(discriminant))/2*a ;
            printf("roots = %.2lf , %.2lf",root1,root2);
            break;
        case 0:
            switch(discriminant<0)
            {
            case 1:
                root1=root2=(-b)/(2*a);
                imaginary = sqrt(-discriminant) / (2 * a);
                printf("complex roots = %.2lf+i%.2lf and %.2lf-i%.2lf",root1,imaginary,root2,imaginary);
                break;
            case 0 :
                root1=root2=(-b)/(2*a);
                printf("roots = %.2lf, %.2lf",root1,root2);
                break;


            }

        }


    return 0;
}
