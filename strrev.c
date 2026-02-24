#include <stdio.h>

int main()
{
    char str[100], rev[100];
    int i, j = 0;

    printf("Enter a string: ");
    gets(str);

    while (str[j] != '\0')
    {
        j++;
    }

    for (i = 0; i < j; i++)
    {
        rev[i] = str[j - i - 1];
    }

    rev[i] = '\0';

    printf("Reversed string: %s", rev);

    return 0;
}