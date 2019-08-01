#include <stdio.h>

int main()
{
    int n, count = 0, data[100][100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            count += n;
            for (int j = 0; j < n; j++)
            {
                data[j][i] = count--;
            }
            count += n;
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                data[j][i] = ++count;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", data[i][j]);
        }

        printf("\n");
    }

    return 0;
}
