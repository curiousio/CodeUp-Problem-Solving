#include <stdio.h>

int main()
{
    int i, n[5];

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &n[i]);
    }

    int max = n[0], min = n[0];

    for (i = 0; i < 5; i++)
    {
        if (max < n[i])
        {
            max = n[i];
        }
        if (min > n[i])
        {
            min = n[i];
        }
    }

    printf("%d\n", max);
    printf("%d", min);

    return 0;
}
