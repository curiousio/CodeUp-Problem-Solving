#include <stdio.h>

int main()
{
    int x1, y1, x2, y2, x3, y3;

    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);
    scanf("%d %d", &x3, &y3);

    for (int i = x1; i <= x2; i++)
    {
        for (int j = y1; j <= y2; j++)
        {
            if (i == x3 && j == y3)
            {
                printf("충돌");

                return -1;
            }
        }
    }

    printf("비충돌");

    return 0;
}
