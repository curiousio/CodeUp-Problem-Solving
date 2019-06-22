#include <stdio.h>

int main()
{
    int i, sum = 0, n[10];

    for (i = 0; i < 10; i++)
    {
        scanf("%1d", &n[i]);
        sum += n[i];
    }

    if (sum % 7 == 4)
    {
        printf("suspect");
    }
    else
    {
        printf("citizen");
    }

    return 0;
}
