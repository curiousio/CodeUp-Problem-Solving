#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        printf("*");

        for (int j = 0; j < (i - 1) * 2; j++)
        {
            printf(" ");
        }
        printf("*\n");
    }

    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        printf("*");

        for (int j = 0; j < (i - 1) * 2; j++)
        {
            printf(" ");
        }
        printf("*\n");
    }

    return 0;
}
