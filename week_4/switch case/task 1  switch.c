#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{



   //task 1

   int day;
   printf("Enter a num (1 to 7)\n");
   scanf("%d",&day);
   switch(day)
   {
        case 1:
            printf("saturday");
            break;
        case 2:
            printf("sunday");
            break;
        case 3:
            printf("monday");
            break;
        case 4:
            printf("tuesday");
            break;
        case 5:
            printf("wednesday");
            break;
        case 6:
            printf("thursday");
            break;
        case 7:
            printf("friday");
            break;
        default:
            printf("invalid, try again");

   }


    return 0;
}
