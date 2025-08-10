#include<stdio.h>
int main()
{
    int table,a,b;
    printf("enter a number for table:");
    scanf("%d",&table);
    for ( a = 1; a <=10; a++)
    {
        printf("%d\n",table*a);
    
    }
    printf("thanks");
    return 0;
    
}