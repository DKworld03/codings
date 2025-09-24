
#include<stdio.h>
int isprime(int num)
{
   if (num<=1)
        return 0;
        for(int i=2;i<=num/2;i++)
        {
            if(num%i==0)
                return 0;
        }
        return 1;

}
int main()
{
  int n,i,number=2,count =0;
  printf("first prime number are:");
  while(count<10)
  {
  if(isprime(number))
    {

      printf("%d is prime number\n\n",number);
      count++;
    }

     number++;
  }
  printf("\n");
  return 0;
  }
