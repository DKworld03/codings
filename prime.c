#include<stdio.h>
int main ()
{

    int i=2,n;
    printf("enter n value:");
    scanf("%d",&n);
    while(i<n)
    {
          if(n%i==0)
        {
         break;
        }
          i=i+1;
    }

        if(i==n)
            printf("%d is prime number",n);
            else
                printf("%d is not prime number",n);
 return 0;

    }





