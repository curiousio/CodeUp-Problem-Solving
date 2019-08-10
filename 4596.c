#include <stdio.h>

int main()
{
    int i, j, data[10][10], max;

    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            scanf("%d", &data[i][j]);
        }
    }

    max = data[0][0];
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if (max < data[i][j])
            {
                max = data[i][j];
            }
        }
    }

    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if (max == data[i][j])
            {
                printf("%d\n%d %d", max, i + 1, j + 1);
                return 1;
            }
        }
    }

    return 0;
}
