#include <stdio.h>

int sum[1000000];

int main()
{
    int n, m, t;

    scanf("%d %d", &n, &m);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &t);
        sum[i] = sum[i - 1] + t;
    }

    while (m--)
    {
        int a, b;

        scanf("%d %d", &a, &b);
        printf("%d\n", sum[b] - sum[a - 1]);
    }

    return 0;
}
