#include <stdio.h>

int main()
{
    int n, i, j, k, data[100][100];

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        k = i + 1;

        for (j = 0; j < n; j++)
        {
            data[i][j] = k += n;
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", data[i][j] - n);
        }
        printf("\n");
    }

    return 0;
}
