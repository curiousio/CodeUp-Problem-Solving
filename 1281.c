#include <stdio.h>

int main()
{
    int a, b, i, sum = 0;

    scanf("%d %d", &a, &b);

    if (a % 2 != 0)
    {
        printf("%d", a);
        sum += a;
    }
    else
    {
        printf("-%d", a);
        sum -= a;
    }

    for (i = a + 1; i <= b; i++)
    {
        if (i % 2 != 0)
        {
            printf("+%d", i);
            sum += i;
        }
        else
        {
            printf("-%d", i);
            sum -= i;
        }
    }

    if (sum >= 0)
    {
        printf("=+%d", sum);
    }
    else
    {
        printf("=%d", sum);
    }

    return 0;
}
