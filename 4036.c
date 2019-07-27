#include <stdio.h>

int main()
{
    int a, b, n, m;

    scanf("%d %d", &n, &m);

    a = (n + m) / 2;
    b = n - a;

    printf("%d\n", a);
    printf("%d", b);

    return 0;
}
