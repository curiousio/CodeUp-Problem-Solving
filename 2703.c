#include <stdio.h>

int main()
{
    int n, stick[10000], up = 0, down = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &stick[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (stick[i] < stick[i + 1])
        {
            up++;
        }
        else if (stick[i] > stick[i + 1])
        {
            down++;
        }
    }

    printf("%d %d", up, down);

    return 0;
}
