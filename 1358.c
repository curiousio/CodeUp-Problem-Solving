#include <stdio.h>

int main()
{
    int n, i, j;

    scanf("%d", &n);

    for (i = 1; i <= n / 2 + 1; i++)
    {
        for (j = 1; j <= n / 2 + 1; j++)
        {
            if (i + j > n / 2 + 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        for (j = 1; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
