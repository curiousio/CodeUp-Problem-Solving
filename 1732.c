#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    printf("%.1lf\n", (double)a / b);
    printf("%d\n", a / b);
    printf("%.0lf", pow(a, b));

    return 0;
}
