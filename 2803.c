#include <stdio.h>
#include <math.h>

int main()
{
    int x1, y1, d1, x2, y2, d2;
    double d;

    scanf("%d %d %d", &x1, &y1, &d1);
    scanf("%d %d %d", &x2, &y2, &d2);

    d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    if (d <= d1 + d2)
    {
        printf("overlapped");
    }
    else
    {
        printf("not overlapped");
    }

    return 0;
}
