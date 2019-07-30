#include <stdio.h>

int gcd(int a, int b)
{
    return (a % b == 0 ? b : gcd(b, a % b));
}

int main()
{
    int a, b, c, temp;

    scanf("%d %d %d", &a, &b, &c);

    temp = gcd(a, b);

    printf("%d", gcd(c, temp));

    return 0;
}
