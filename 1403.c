#include <stdio.h>

int main()
{
    int k, i, j;

    scanf("%d", &k);

    int data[k];

    for (i = 0; i < k; i++)
    {
        scanf("%d", &data[i]);
    }

    for (i = 1; i <= 2; i++)
    {
        for (j = 0; j < k; j++)
        {
            printf("%d\n", data[j]);
        }
    }

    return 0;
}
