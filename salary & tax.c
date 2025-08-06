#include<stdio.h>
int main()
{
    int salary,tax;
    printf("\n enter the salary:");
    scanf("%d",&salary);
    if(salary<150000)
        tax=0;
    if((salary>=150000)&&(salary<300000))
    tax=(salary*20)/100;
    if(salary>=300000)
        tax=(salary*30)/100;
    printf("\nTax=%d",tax);


}
