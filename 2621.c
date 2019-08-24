#include <stdio.h>

int n, div[10000000], j = 0, sum = 0;

int main()
{
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            div[j] = i;
            j++;
        }
    }

    for (int i = 0; i < j; i++)
    {
        sum += div[i];
    }

    printf("%d", sum);

    return 0;
}
