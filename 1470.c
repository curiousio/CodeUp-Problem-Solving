#include <stdio.h>

int main()
{
    int n, i, j, count = 0;

    scanf("%d", &n);

    int data[n][n];

    for (i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (j = 0; j < n; j++)
            {
                data[j][i] = ++count;
            }
        }
        else
        {
            for (j = n - 1; j >= 0; j--)
            {
                data[j][i] = ++count;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", data[i][j]);
        }

        printf("\n");
    }

    return 0;
}
