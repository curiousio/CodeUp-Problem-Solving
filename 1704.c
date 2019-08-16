#include <stdio.h>

int main()
{
    int front[10], back[10];

    for (int i = 0; i < 6; i++)
    {
        scanf("%1d", &front[i]);
    }
    for (int i = 0; i < 7; i++)
    {
        scanf("%1d", &back[i]);
    }

    if (back[0] == 1)
    {
        printf("%d M", 12 + 100 - (10 * front[0] + front[1]) + 1);
    }
    else if (back[0] == 2)
    {
        printf("%d F", 12 + 100 - (10 * front[0] + front[1]) + 1);
    }
    else if (back[0] == 3)
    {
        printf("%d M", 12 - (10 * front[0] + front[1]) + 1);
    }
    else
    {
        printf("%d F", 12 - (10 * front[0] + front[1]) + 1);
    }

    return 0;
}
