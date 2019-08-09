#include <stdio.h>

int main()
{
    int data[10], max, min;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &data[i]);
    }

    for (int i = 1; i <= 1; i++)
    {
        int sum = 0;

        while (data[0] != 0)
        {
            sum += data[0] % 10;
            data[0] /= 10;
        }

        max = sum;
        min = sum;
    }

    for (int i = 1; i < 10; i++)
    {
        int sum = 0;

        while (data[i] != 0)
        {
            sum += data[i] % 10;
            data[i] /= 10;
        }

        if (max < sum)
        {
            max = sum;
        }
        if (min > sum)
        {
            min = sum;
        }
    }

    printf("%d %d", max, min);

    return 0;
}
