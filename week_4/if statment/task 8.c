#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main()
{


int x ;
puts("Enter a character: \n");
    scanf("%c",&x);

    if (x=='a' ||  x=='o'  || x=='u' || x=='i' ||  x=='e' ||  x=='A' ||  x=='O'  || x=='U' || x=='I' ||  x=='E')
    {

        printf("character is a vowel");
    }

    else
    {
        printf("character is a constant");
    }

    return 0;
}


