#include<stdio.h>
int isEven(int num)
{
   if (num % 2 == 0)
        return 1;
    else
        return 0;

}
int main()
{
  int n,i,number;
  printf("how many number do you want to cheak:");
  scanf("%d",&n);
  for (i=1;i<=n;i++)
  {
      printf("enter the number%d:",i);
      scanf("%d",&number);

  if(isEven(number))

      printf("%d is even number\n",number);


  else

      printf("%d is not even number\n",number);
  }
  return 0;
}
