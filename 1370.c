#include <stdio.h>

int main()
{
    int h, r;

    scanf("%d %d", &h, &r);

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= h * 2 - 1; j++)
        {
            for (int k = 1; k <= h; k++)
            {
                if (j <= h)
                {
                    if (j == k)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                else
                {
                    if (k == h * 2 - j)
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
            }
            printf("\n");
        }
    }

    return 0;
}
