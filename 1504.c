#include <stdio.h>

int main()
{
    int n, c = 1, a[100][100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < n; j++)
            {
                a[j][i] = c;
                c++;
            }
        }
        else
        {
            for (int j = n - 1; j >= 0; j--)
            {
                a[j][i] = c;
                c++;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }

        printf("\n");
    }

    return 0;
}
