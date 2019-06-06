#include <stdio.h>

int main()
{
    int a, b, c, d;
    float res1, res2;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    res1 = (float)a / b;
    res2 = (float)c / d;

    if (res1 > res2)
    {
        printf(">");
    }
    else if (res1 == res2)
    {
        printf("=");
    }
    else
    {
        printf("<");
    }

    return 0;
}
