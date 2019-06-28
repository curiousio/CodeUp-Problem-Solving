#include <stdio.h>

int fact(int x)
{
    int i, result = 1;

    for (i = x; i > 0; i--)
    {
        result *= i;
    }

    return result;
}

int main()
{
    int n, r, x1, x2, x3, c;

    scanf("%d %d", &n, &r);

    x1 = fact(n);
    x2 = fact(r);
    x3 = fact(n - r);

    c = x1 / (x2 * x3);

    printf("%d", c);

    return 0;
}
