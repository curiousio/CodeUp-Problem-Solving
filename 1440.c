#include <stdio.h>

int main()
{
    int n, i, j;

    scanf("%d", &n);

    int data[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &data[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("%d: ", i + 1);

        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                continue;
            }
            else if (data[j] == data[i])
            {
                printf("= ");
            }
            else if (data[j] > data[i])
            {
                printf("< ");
            }
            else
            {
                printf("> ");
            }
        }

        printf("\n");
    }

    return 0;
}
