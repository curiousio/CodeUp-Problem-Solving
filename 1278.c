#include <stdio.h>

int main()
{
    int n, count = 0;

    scanf("%d", &n);

    while (1)
    {
        if (n / 10 == 0)
        {
            count++;
            break;
        }
        else
        {
            n /= 10;
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
