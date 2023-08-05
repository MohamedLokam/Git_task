#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m ;
puts("enter a number of month (1-12)");
  scanf("%d",&m);

  if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
  {
      printf("num of days = 31 days ");

  }
  else if (m==4 || m==6 || m==9 || m==11)
    {
    printf("num of days = 30 days");

    }

    else if (m==2)
    {
    printf("num of days = 28/29 days");
    }
    else
    {
        printf("please try again , enter a correct number");

    }
    return 0;
}
