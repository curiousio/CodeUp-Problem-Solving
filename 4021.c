#include <stdio.h>

int main()
{
    int n[7], sum = 0;

    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &n[i]);
    }
    for (int i = 0; i < 7; i++)
    {
        if (n[i] % 2 != 0)
        {
            sum += n[i];
        }
    }

    if (sum == 0)
    {
        printf("-1");
    }
    else
    {
        printf("%d", sum);
    }

    return 0;
}
