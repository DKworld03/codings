#include<stdio.h>
int main ()
{
    char x;
    int a1,a2;

    printf("enter a operator(+,-,/,*):");
    scanf("%c",&x);
printf("enter first number:\n");
scanf("%d",&a1);
printf("enter the second number:\n");
scanf("%d",&a2);
if(x=='+')
{
    printf("your addition is:%d\n",a1+a2);
}
else if(x=='-')
{
    printf("your subtraction is:%d\n",a1-a2);
}
else if(x=='/')
{
    printf("your division is:%d\n",a1/a2);
}
else if(x=='*')
{
    printf("your multiplication is:%d\n",a1*a2);
}
else
{
    printf("error in numbers!");
}
printf("thanks");
return 0;
}