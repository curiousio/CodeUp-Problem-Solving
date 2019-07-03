#include <stdio.h>
#include <limits.h>

int main()
{
    int n, x, s = INT_MIN, i;

    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        if (s < i * (n - 2 * i))
        {
            x = i;
            s = i * (n - 2 * i);
        }
    }

    printf("%d", x);

    return 0;
}
