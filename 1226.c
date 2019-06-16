#include <stdio.h>

int main()
{
    int i, j, lotto[7], data[6], count = 0, bonus = 0;

    for (i = 0; i < 7; i++)
    {
        scanf("%d", &lotto[i]);
    }
    for (i = 0; i < 6; i++)
    {
        scanf("%d", &data[i]);
    }

    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            if (data[i] == lotto[j])
            {
                count++;
            }
        }
    }

    for (i = 0; i < 6; i++)
    {
        if (data[i] == lotto[6])
        {
            bonus++;
        }
    }

    if (count == 6)
    {
        printf("1");
    }
    else if (count == 5 && bonus == 1)
    {
        printf("2");
    }
    else if (count == 5)
    {
        printf("3");
    }
    else if (count == 4)
    {
        printf("4");
    }
    else if (count == 3)
    {
        printf("5");
    }
    else if (count <= 2)
    {
        printf("0");
    }

    return 0;
}
