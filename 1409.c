#include <stdio.h>

int main()
{
    int num[11], i, k;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
    }

    scanf("%d", &k);

    printf("%d", num[k - 1]);

    return 0;
}
