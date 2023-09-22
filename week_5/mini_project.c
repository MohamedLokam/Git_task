#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello dear!\n");
    double total =0;
    int count =0 ;
    int b = 1 ;
while(b)
{


    do
    {
        printf("**************************\n");
        printf("Choose from these products\n");
        printf("1- Galaxy        5$ \n");
        printf("2- Roomi_cheese  8$ \n");
        printf("3- chips         3$ \n");
        printf("4- milk          5$ \n");
        printf("5- gum           2$ \n");
        printf("6- bread         2$ \n");
        printf("**************************\n");
        printf("If you want to continue, click 0  \n");
        int x ;
        scanf("%d",&x);
        if(x==0 || x>6)
        {
            break;
        }
        else
        {
            switch (x)
                {
                case 1 :
                    total+=5;
                    break;
                case 2:
                    total+=8;
                     break;
                case 3:
                    total+=3;
                     break;
                case 4:
                    total+=5;
                     break;
                case 5:
                    total+=2;
                     break;
                case 6:
                    total+=2;
                     break;
                default :
                    break;
                }
                count++;
        }

    }while(count<6);
    if (count<2)
    {
        printf("please,try again 2 items are required as a minimum for one order.");
    }

        printf("count =%d \n",count);
        printf(" price :  %lf $ \n",total);


        if(count>5)
        {
            total=total-total*20/100;
        }

    printf("num of items: %d\n",count);
    printf("total price :  %lf $ \n",total);
    printf("**************************\n");
    printf("if you want to continue press -1- \n");
    printf("if you want to finish press -0- \n");
    int k;
    scanf("%d",&k);
    b=k;
}
        printf("for Regular shipping press 1 \n");
                printf("for overnight press 2 \n");
                int z ;
                scanf("%d",&z);
                if(z==1)
                {
                    if(total<10)
                    {
                        total+=2;
                    }
                    else if (total>=10)
                        total+=3;
                }
                else if(z==2)
                {
                    if(total<10)
                    {
                        total+=7;
                    }
                    else if (total>=10)
                        total+=8;
                }
                printf("**************************\n");
                printf("num of items: %d\n",count);
    printf("total price :  %.2lf $ \n",total);
}
