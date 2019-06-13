#include <stdio.h>
#include <limits.h>

int main()
{
    int n, i, max = INT_MIN;

    scanf("%d", &n);

    int data[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &data[i]);

        if (max < data[i])
        {
            max = data[i];
        }
    }

    printf("%d", max);

    return 0;
}
