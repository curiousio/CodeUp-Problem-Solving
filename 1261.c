#include <stdio.h>

int main()
{
    int n[10], i, five, count = 0;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &n[i]);
    }

    for (i = 0; i < 10; i++)
    {
        if (n[i] % 5 == 0)
        {
            five = n[i];
            count++;

            break;
        }
    }

    if (count > 0)
    {
        printf("%d", five);
    }
    else
    {
        printf("0");
    }

    return 0;
}
