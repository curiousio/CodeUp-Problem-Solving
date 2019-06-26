#include <stdio.h>

int main()
{
    int n, i, j, k = 1, data[100][100];

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = n - 1; j >= 0; j--)
        {
            data[i][j] = k++;
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
