#include <stdio.h>

int main()
{
    int n, i, j, temp;

    scanf("%d", &n);

    int data[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &data[i]);
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", data[j]);
        }

        temp = data[0];
        for (j = 0; j < n - 1; j++)
        {
            data[j] = data[j + 1];
        }
        data[n - 1] = temp;

        printf("\n");
    }

    return 0;
}
