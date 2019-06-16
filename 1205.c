#include <stdio.h>
#include <math.h>
#include <limits.h>

int main()
{
    int i;
    double a, b, max = INT_MIN, res[10];

    scanf("%lf %lf", &a, &b);

    res[0] = a + b;
    res[1] = b + a;
    res[2] = a - b;
    res[3] = b - a;
    res[4] = a * b;
    res[5] = b * a;
    res[6] = a / b;
    res[7] = b / a;
    res[8] = pow(a, b);
    res[9] = pow(b, a);

    for (i = 0; i < 10; i++)
    {
        if (max < res[i])
        {
            max = res[i];
        }
    }

    printf("%lf", max);

    return 0;
}
