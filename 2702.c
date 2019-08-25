#include <stdio.h>

int main()
{
    int n, battery[5000][6], sum = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            scanf("%d", &battery[i][j]);
        }
    }

    for (int i = 0; i < 6; i++)
    {
        int max = battery[0][i];
        for (int j = 0; j < n; j++)
        {
            if (max < battery[j][i])
            {
                max = battery[j][i];
            }
        }
        sum += max;
    }

    printf("%d", sum);

    return 0;
}
