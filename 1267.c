#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    scanf("%d", &n);

    int data[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &data[i]);

        if (data[i] % 5 == 0)
        {
            sum += data[i];
        }
    }

    printf("%d", sum);

    return 0;
}
