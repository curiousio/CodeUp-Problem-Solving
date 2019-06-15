#include <stdio.h>

int main()
{
    int start, last, i, j;

    scanf("%d %d", &start, &last);

    for (i = start; i <= last; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            printf("%d*%d=%d\n", i, j, i * j);
        }
    }

    return 0;
}
