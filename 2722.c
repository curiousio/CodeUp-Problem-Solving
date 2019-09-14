#include <stdio.h>

int main()
{
    int n, add = 2, sum;

    scanf("%d", &n);

    sum = n * 5;
    for (int i = 2; i <= n; i++)
    {
        sum += add;
        add += 3;
    }

    printf("%d", sum);

    return 0;
}
