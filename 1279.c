#include <stdio.h>

int main()
{
    int a, b, sum = 0;

    scanf("%d %d", &a, &b);

    for (; a <= b; a++)
    {
        if (a % 2 == 0)
        {
            sum = sum - a;
        }
        else
        {
            sum = sum + a;
        }
    }

    printf("%d", sum);

    return 0;
}
