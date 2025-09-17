#include<stdio.h>
int main ()
{
    int i=1,x,n,m=1;
    printf("enter n value:");
    scanf("%d%d",&n,-&x);
    while(i<=n)
   {

    m=m*x;
    i=i+1;
   }
   printf("(%d^%d)=%d",x,n,m);

    return 0;
}
