#include <stdio.h>

int main()
{
    int n, i;

    scanf("%d", &n);

    int data[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &data[i]);
    }

    printf("%d %d %d", data[0], data[((n + 1) / 2) - 1], data[n - 1]);

    return 0;
}
