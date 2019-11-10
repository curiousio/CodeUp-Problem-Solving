#include <stdio.h>

int main()
{
    long long int a;
    int r, n;

    scanf("%lld %d %d", &a, &r, &n);

    for (int i = 2; i <= n; i++)
    {
        a *= r;
    }

    printf("%lld", a);

    return 0;
}
