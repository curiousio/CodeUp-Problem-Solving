#include <stdio.h>

int main()
{
    int n, m, i, j;

    scanf("%d %d", &n, &m);

    int count = n * m, data[n][m];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            data[i][j] = count;
            count--;
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", data[i][j]);
        }

        printf("\n");
    }

    return 0;
}
