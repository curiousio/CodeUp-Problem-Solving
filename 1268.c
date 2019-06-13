#include <stdio.h>

int main()
{
    int n, i, count = 0;

    scanf("%d", &n);

    int data[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &data[i]);

        if (data[i] % 2 == 0)
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
