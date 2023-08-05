#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main()
{

  int a;

  puts("enter a number");
  scanf("%d",&a);
  if (!(a%5) && !(a%11))
  {
      printf("number is divisible by 5 and 11 ");
  }
  else{
    printf("not divisible by 5 and 11" );

  }

    return 0;
}
