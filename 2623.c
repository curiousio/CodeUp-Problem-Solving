#include <stdio.h>

int gcd(int a, int b)
{
    int mod = a % b;

    while (mod > 0)
    {
        a = b;
        b = mod;
        mod = a % b;
    }

    return b;
}

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d", gcd(a, b));

    return 0;
}
