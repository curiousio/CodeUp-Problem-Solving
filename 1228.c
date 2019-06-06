#include <stdio.h>

int main()
{
    double height, weight, bmi;

    scanf("%lf %lf", &height, &weight);

    bmi = ((weight - (height - 100) * 0.9) * 100) / ((height - 100) * 0.9);

    if (bmi > 20.0)
    {
        printf("비만");
    }
    else if (bmi > 10.0)
    {
        printf("과체중");
    }
    else
    {
        printf("정상");
    }

    return 0;
}
