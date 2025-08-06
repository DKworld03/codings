#include<stdio.h>
int main ()
{
    char x;
    float a1,a2;

    printf("enter a operator(+,-,/,*):");
    scanf("%c",&x);
printf("enter first number:\n");
scanf("%f",&a1);
printf("enter the second number:\n");
scanf("%f",&a2);
if(x=='+')
{
    printf("your addition is:%f\n",a1+a2);
}
else if(x=='-')
{
    printf("your subtraction is:%f\n",a1-a2);
}
else if(x=='/')
{
    printf("your division is:%f\n",a1/a2);
}
else if(x=='*')
{
    printf("your multiplication is:%f\n",a1*a2);
}
else
{
    printf("error in numbers!");
}
printf("thanks");
return 0;
}