#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = a % b;
        a = b;
        b = temp;
    }

    return abs(a);
}

int main()
{
    int a, b, c, temp;

    scanf("%d %d %d", &a, &b, &c);

    temp = gcd(a, b);

    printf("%d", gcd(c, temp));

    return 0;
}
