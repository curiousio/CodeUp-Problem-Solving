#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, exit[5], index;

    scanf("%d", &x);
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &exit[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        if (x <= exit[i])
        {
            index = i;
            break;
        }
    }

    if (index == 0)
    {
        printf("%d", abs(exit[index] - x));
    }
    else if (abs(exit[index] - x) <= abs(exit[index - 1] - x))
    {
        printf("%d", abs(exit[index] - x));
    }
    else
    {
        printf("%d", abs(exit[index - 1] - x));
    }

    return 0;
}
