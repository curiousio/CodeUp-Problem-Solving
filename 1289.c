#include <stdio.h>

int main()
{
    int max, i, n[3][2];

    for (i = 0; i < 3; i++)
    {
        scanf("%d %d", &n[i][0], &n[i][1]);
    }

    max = n[0][0] * n[0][1];
    for (i = 1; i < 3; i++)
    {
        if (max < n[i][0] * n[i][1])
        {
            max = n[i][0] * n[i][1];
        }
    }

    printf("%d", max);

    return 0;
}
