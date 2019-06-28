#include <stdio.h>

int main()
{
    int b, data, i;
    double a, income;

    scanf("%lf %d", &a, &b);

    income = a;

    for (i = 1; i <= b; i++)
    {
        scanf("%d", &data);

        if (data == 0)
        {
            continue;
        }
        else
        {
            income = income * (1 + (double)data / 100);
        }
    }

    if (income < a)
    {
        printf("%.0lf\n", income - a);
        printf("bad");
    }
    else if (income > a)
    {
        printf("%.0lf\n", income - a);
        printf("good");
    }
    else
    {
        printf("0\n");
        printf("same");
    }

    return 0;
}
