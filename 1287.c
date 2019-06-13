#include <stdio.h>

int main()
{
    int mul, n = 1, k = 0;

    while (1)
    {
        scanf("%d", &mul);

        if (mul >= 1 && mul <= 9)
        {
            break;
        }
    }

    while (n <= 9)
    {
        k = mul * n;

        while (k > 0)
        {
            printf("*");
            k--;
        }
        printf("\n");

        n++;
    }

    return 0;
}
