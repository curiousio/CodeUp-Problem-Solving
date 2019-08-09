#include <stdio.h>

int main()
{
    int a, b, x, y, z, total;

    scanf("%d %d", &a, &b);

    x = a * (b % 10);
    y = a * ((b / 10) % 10);
    z = a * (b / 100);

    total = x + y * 10 + z * 100;

    printf("%d\n%d\n%d\n%d\n", x, y, z, total);

    return 0;
}
