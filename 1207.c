#include <stdio.h>

int main()
{
    int a, b, c, d, count;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    count = a + b + c + d;

    if (count == 1)
    {
        printf("도");
    }
    else if (count == 2)
    {
        printf("개");
    }
    else if (count == 3)
    {
        printf("걸");
    }
    else if (count == 4)
    {
        printf("윷");
    }
    else
    {
        printf("모");
    }

    return 0;
}
