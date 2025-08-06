#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("enter first number:");
    scanf("%d",&n1);
     printf("enter second number:");
    scanf("%d",&n2);
     printf("enter third number:");
    scanf("%d",&n3);
    if(n1>=n2&&n1>=n3)
    {
        printf("the greatest number is:%d",n1);
    }
    if(n2>=n1&&n2>=n3)
    {
        printf("the greatest number is:%d",n2);
    }
    else
    {
        printf("the greatest number is:%d",n3);
    }
    return 0;
}