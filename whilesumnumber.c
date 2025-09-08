//Q.to accept a number n and print sum of all number till n

#include <stdio.h>
int main()
{
    printf("\nRoll no:23||Divanshu kumawat");
    int i, n, sum = 0;
    i = 1;
    printf("\nenter the n value:");
    scanf("%d", &n);
    while (i <= n)
    {
        sum = sum + i;
        i = i + 1;
    }
    printf("sum of given is:%d", sum);
    printf("\nRoll no:23||Divanshu kumawat");
    return 0;
}