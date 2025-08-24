#include <stdio.h>
int main()
{
    float r, h;
    printf("enter the radius and height for calculating surfacr area:");
    scanf("%f%f", &r, &h);
    printf("surface area is:%f", 2 * 3.14 * r * r + 2 * 3.14 * r * h);
    printf("\n volume is:%f", 3.14 * r * r * h);
    return 0;
}