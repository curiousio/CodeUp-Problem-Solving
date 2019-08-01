#include <stdio.h>

int main()
{
    int n, data[15][2], escore = 100, gscore = 100;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &data[i][0], &data[i][1]);

        if (data[i][0] > data[i][1])
        {
            gscore -= data[i][0];
        }
        else if (data[i][0] < data[i][1])
        {
            escore -= data[i][1];
        }
    }

    printf("%d\n%d", escore, gscore);

    return 0;
}
