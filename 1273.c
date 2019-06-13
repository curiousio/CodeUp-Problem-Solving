#include <stdio.h>

int main()
{
    int n, i, j;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (n == i * j)
            {
                printf("%d ", i);
            }
        }
    }

    return 0;
}
