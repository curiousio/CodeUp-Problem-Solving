#include <stdio.h>

int n, m, x, arr[10000000];

int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        arr[x] = 1;
    }

    scanf("%d", &m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &x);
        printf("%d ", arr[x]);
    }

    return 0;
}
