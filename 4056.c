#include <stdio.h>

int main()
{
    int n;
    double total = 0;

    scanf("%d", &n);

    if (n > 10000)
    {
        total = 1475 + (n - 10000) * (2 / 100.0);
    }
    else if (n > 4500)
    {
        total = 1200 + (n - 4500) * (5 / 100.0);
    }
    else if (n > 1500)
    {
        total = 750 + (n - 1500) * (15 / 100.0);
    }
    else if (n > 500)
    {
        total = 350 + (n - 500) * (40 / 100.0);
    }
    else
    {
        total = n * (70 / 100.0);
    }

    printf("%d", (int)total);

    return 0;
}
