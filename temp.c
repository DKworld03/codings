#include <stdio.h>
int main()
{
    float F, C, K;
    printf("enter temperture in Fahrenheit: ");
    scanf("%f", &F);
    printf("\ntemperture in Celsius:%f", (5.0/9.0 * (F - 32)));
    C=(5.0/9.0 * (F - 32));
     printf("\ntemperture in K :%f", C + 273.15);
   return 0;
}