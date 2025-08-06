#include<stdio.h>
int main ()
{

    int a;
    printf("enter a number:");
    scanf("%d",&a);
    if((a%2==0)||(a%5==0))
    {

        printf("given number is divisible by 2 or 5");
    }
    else
        {
        printf("given number is not divisible by 2 or 5");

    }
    return 0;
    }

