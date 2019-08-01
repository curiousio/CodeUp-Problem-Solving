#include <stdio.h>

int main()
{
    int n, count = 1;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 1; j <= n; j++)
            {
                printf("%d ", count);
                count++;
            }
        }
        else
        {
            count += n - 1;
            for (int j = n; j >= 1; j--)
            {
                printf("%d ", count);
                count--;
            }
            count += n + 1;
        }

        printf("\n");
    }

    return 0;
}
