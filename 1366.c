#include <stdio.h>

int main()
{
    int n, i, j;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == 1 || i == n)
            {
                printf("*");
            }
            else if (j == 1 || j == i || j == n - i + 1 || j == n)
            {
                printf("*");
            }
            else if (j == n / 2 + n % 2 || i == n / 2 + n % 2)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
