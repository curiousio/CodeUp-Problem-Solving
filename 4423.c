#include <stdio.h>

int main()
{
    int x1, x2, y1, y2, sum = 0, a[101][101] = { 0 };

    for (int n = 1; n <= 4; n++)
    {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

        for (int i = x1; i < x2; i++)
        {
            for (int j = y1; j < y2; j++)
            {
                a[i][j] = 1;
            }
        }
    }

    for (int i = 1; i <= 100; i++)
    {
        for (int j = 1; j <= 100; j++)
        {
            sum += a[i][j];
        }
    }

    printf("%d", sum);

    return 0;
}
