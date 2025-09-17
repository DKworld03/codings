#include<stdio.h>
int main ()
{
    int n,i=1,sum=0;
    printf("enter the n value:");
    scanf("%d",&n);
   while(i<n)
    {
        if(n%i==0)
            {
           sum=sum+i;
            }
            i=i+1;
    }
     if(n==sum)
            printf("%d is perfect number",n);
            else
                printf("%d is not perfect number",n);

    return 0;
}

