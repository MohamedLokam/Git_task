#include <stdio.h>
#include <stdlib.h>

int main()
{
    // task 19

    float physics, chemistry, biology, mathematics , computer ;
    float per;
    printf("Enter the mark for each of the five subjects(full mark = 100 for each sub) :  ");
    scanf("%f%f%f%f%f",&physics,&chemistry,&biology,&mathematics ,&computer);
    per = (physics+chemistry+biology+mathematics+computer)*0.2 ;
    if (per>=90.0)
    {
        printf("percentage = %.2f\n",per);
        printf("Grade A");

    }
    else if (per>=80.0)
    {
        printf("%.2f",per);
        printf("Grade B");

    }
        else if (per>=70.0)
    {
        printf("%.2f",per);
        printf("Grade C");

    }
    else if (per>=60.0)
    {
        printf("%.2f",per);
        printf("Grade D");

    }
    else if (per>=40.0)
    {
        printf("%.2f",per);
        printf("Grade E");

    }
    else
    {
        printf("%.2f",per);
        printf("Grade F");

    }




    return 0;
}
