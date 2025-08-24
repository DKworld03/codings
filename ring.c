#include<stdio.h>
int main()
{
    float ir,or,pm,area;
    printf("enter inner radius and outter radius:");
    scanf("%f%f",&ir,&or);
    printf("perimeter of ring is :%f",2*3.14*(ir+or));
    printf("\narea of ring is:%f",3.14*(ir*ir-or*or));
    return 0;
}
