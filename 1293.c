#include <stdio.h>
#include <limits.h>

int main()
{
    int n, i, max = INT_MIN, min = INT_MAX;

    scanf("%d", &n);

    int data[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &data[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (data[i] > max)
        {
            max = data[i];
        }
        if (data[i] < min)
        {
            min = data[i];
        }
    }

    printf("%d %d", max, min);

    return 0;
}
