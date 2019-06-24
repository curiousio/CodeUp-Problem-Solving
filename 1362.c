#include <stdio.h>

int main()
{
    int n, i, j, sum = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j <= i)
            {
                sum++;
            }
            else
            {
                break;
            }
        }
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j <= i)
            {
                printf("%d ", sum);
                sum--;
            }
            else
            {
                break;
            }
        }

        printf("\n");
    }

    return 0;
}
