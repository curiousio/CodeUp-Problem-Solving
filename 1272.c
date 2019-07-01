#include <stdio.h>

int main()
{
    int k, h, kres, hres;

    scanf("%d %d", &k, &h);

    if (k % 2 != 0)
    {
        kres = k - (k / 2);
    }
    else
    {
        kres = k * 5;
    }

    if (h % 2 != 0)
    {
        hres = h - (h / 2);
    }
    else
    {
        hres = h * 5;
    }

    printf("%d", kres + hres);

    return 0;
}
