#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    scanf("%d", &n);

    int lost[n - 1];

    for (i = 0; i < n - 1; i++)
    {
        scanf("%d", &lost[i]);
        sum += lost[i];
    }

    printf("%d", ((n * (n + 1)) / 2) - sum);

    return 0;
}
