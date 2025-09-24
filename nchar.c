#include<stdio.h>
void displayNextChars(char ch, int n)
 {

    printf("Next %d characters after '%c' are: ",n, ch);
    for (int i = 1; i <= n; i++)
        {
            printf("%c ", ch + i);
        }
    printf("\n");
}

int main()
{
    char c;
    int n;

    printf("Enter a character: ");
    scanf(" %c", &c);

    printf("Enter how many next characters you want to display: ");
    scanf("%d", &n);

    displayNextChars(c, n);

    return 0;
}



