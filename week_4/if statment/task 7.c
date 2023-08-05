#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main()
{
    char a;
    printf("Enter a character");
    scanf("%c",&a);
    if ((a>='a' && a<='z') ||  (a>='A' && a<='Z') )
    {
        printf("character is an alphabet");
    }
    else{
        printf("character is not  alphabet");
    }

    return 0;
}
