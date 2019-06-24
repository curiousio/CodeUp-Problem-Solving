#include <stdio.h>

int main()
{
    int h, k, i, j;
    char d;

    scanf("%d %d %c", &h, &k, &d);

    if (d == 'L')
    {
        for (i = 1; i <= h; i++)
        {
            for (j = 1; j <= k + i - 1; j++)
            {
                if (j <= i - 1)
                {
                    printf(" ");
                }
                else
                {
                    printf("*");
                }
            }

            printf("\n");
        }
    }
    else
    {
        for (i = h; i >= 1; i--)
        {
            for (j = 1; j <= k + i - 1; j++)
            {
                if (j <= i - 1)
                {
                    printf(" ");
                }
                else
                {
                    printf("*");
                }
            }

            printf("\n");
        }
    }

    return 0;
}
