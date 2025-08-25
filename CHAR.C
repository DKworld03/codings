#include<stdio.h>
int main ()
{
    char ch;
    printf("enter the character:");
scanf("%c",&ch);


printf("previous charecter: %c",ch-1);
printf("\nnext charecter: %c",ch+1);
return 0;

}