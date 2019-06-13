#include <stdio.h>

int main()
{
    int a, b, i, sum = 0;

    scanf("%d %d", &a, &b);

    for (i = a; i <= b; i++)
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

    printf("=%d", sum);

    return 0;
}
