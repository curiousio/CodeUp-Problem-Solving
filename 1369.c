#include <stdio.h>

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
            {
                printf("*");
            }
            else if ((i + j + 1) % k == 0)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
