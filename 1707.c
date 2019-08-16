#include <stdio.h>

int main()
{
    int data[9], sum = 0, up = 0, down = 0;
    double avg;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &data[i]);
        sum += data[i];
    }

    avg = sum / 10.0;

    for (int i = 0; i < 10; i++)
    {
        if (data[i] >= avg)
        {
            up++;
        }
        else
        {
            down++;
        }
    }

    printf("%.1lf\n%d %d", avg, up, down);

    return 0;
}
