#include <stdio.h>

int main()
{
    int a, b, c, n, i, seq;

    scanf("%d %d %d %d", &a, &b, &c, &n);

    if (n == 1)
    {
        printf("%d", a);
    }
    else
    {
        for (i = 1; i < n; i++)
        {
            seq = a * b + c;
            a = seq;
        }

        printf("%d", seq);
    }

    return 0;
}
