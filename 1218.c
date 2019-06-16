#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (a + b <= c)
    {
        printf("삼각형아님");
    }
    else if (a == b && b == c && c == a)
    {
        printf("정삼각형");
    }
    else if ((a == b && b == c) != (c == a) || (b == c && c == a) != (a == b) || (c == a && a == b) != (b == c))
    {
        printf("이등변삼각형");
    }
    else if (pow((double)a, 2) + pow((double)b, 2) == pow((double)c, 2))
    {
        printf("직각삼각형");
    }
    else if (a + b > c)
    {
        printf("삼각형");
    }

    return 0;
}
