#include<stdio.h>
int main ()
{
    float i , a, t,v,d;
   printf("enter initial velocity:"); 
   scanf("%f",&i);
    printf("enter acceleration:"); 
   scanf("%f",&a);
    printf("enter time:"); 
   scanf("%f",&t);
   printf("\nfinal velocity is :%f",i*+a*t);
   printf("\ndistance is:%f",i*+a*t*t);
   return 0;
}