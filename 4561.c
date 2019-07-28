#include <stdio.h>

int main()
{
    int n[7], odd[7], sum = 0, j = 0;

    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &n[i]);

        if (n[i] % 2 != 0)
        {
            sum += n[i];

            odd[j] = n[i];
            j++;
        }
    }

    int min = odd[0];

    for (int i = 0; i < j; i++)
    {
        if (min > odd[i])
        {
            min = odd[i];
        }
    }

    if (sum == 0)
    {
        printf("-1");
    }
    else
    {
        printf("%d\n%d", sum, min);
    }

    return 0;
}
