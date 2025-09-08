//Q.to accept a number n and print even number till n

#include <stdio.h>
int main()
{
    printf("\nRoll no:23||Divanshu kumawat");
    int i = 1, n;
    printf("\nenter the n value:");
    scanf("%d", &n);
    while (i <= n)
    {
        if (i % 2 == 0)
            printf("\n%d", i);
        i = i + 1;
    }

    printf("\nRoll no:23||Divanshu kumawat");
}