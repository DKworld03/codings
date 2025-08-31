// question= write a program to accept choice of menu from user & according to choice calculate area of object
// area of rectrangle
// area of circle
// area of square
// area of trangle
// exit
#include <stdio.h>
int main()
{
   int choice;
   float r, l, b, h;
   printf("\n***menu***");
   printf("\n1.area of rectrangle");
   printf("\n2.area of circle");
   printf("\n3.area of square");
   printf("\n4.area of trangle");
   printf("\n5.exit ");
   printf("\nenter your choice=");
   scanf("%d", &choice);
   switch (choice)
   {
   case 1:
      printf("enter length=");
      scanf("%f", &l);
      printf("enter breath=");
      scanf("%f", &b);
      printf("\narea of rectrangle=%f", l * b);
      break;

   case 2:
      printf("enter radius=");
      scanf("%f", &r);
      printf("\narea of circle is=%f", 3.14 * r * r);
      break;

   case 3:
      printf("enter side=");
      scanf("%f", &l);
      printf("\narea of square=%f", l * l);
      break;

   case 4:
      printf("enter base=");
      scanf("%f", &b);
      printf("enter height=");
      scanf("%f", &h);
      printf("\narea of area of trangle is =%f", 0.5 * b * h);
      break;

   default:
      printf("\ninvalid choice");
      break;
   }
}