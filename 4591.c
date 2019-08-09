#include <stdio.h>
#include <limits.h>

int main()
{
    int n[9], i, index, max = INT_MIN;

    for (i = 0; i < 9; i++)
    {
        scanf("%d", &n[i]);
    }

    for (i = 0; i < 9; i++)
    {
        if (max < n[i])
        {
            max = n[i];
            index = i;
        }
    }

    printf("%d\n%d", max, index + 1);

    return 0;
}
