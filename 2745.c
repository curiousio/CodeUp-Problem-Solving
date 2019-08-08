#include <stdio.h>

int main()
{
    int a, b, c, up = 0, day = 0;

    scanf("%d %d %d", &a, &b, &c);

    while (up <= a)
    {
        day++;

        up += b;
        if (up >= a)
        {
            break;
        }

        up -= c;
    }

    printf("%d", day);

    return 0;
}
