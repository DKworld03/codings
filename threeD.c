#include<stdio.h>
int main()
{
    float h , b , l ;
    printf("enter height for cuboids: ");
    scanf("%f",&h);
    printf("enter length for cuboids : ");
    scanf("%f",&l);
    printf("enterbreath for cuboids : ");
    scanf("%f",&b);
    printf("surface area  fof cuboid is  :%f",2*(l*b+l*h+b*h));
    printf("\nvolume of cubiod is  :%f",l*b*h);
    return 0;
}

