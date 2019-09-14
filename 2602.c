#include <stdio.h>

int main()
{
    int score[3][3], sum[3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &score[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        sum[i] = score[i][0] + score[i][1] + score[i][2];
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d %d %d %d \n", score[i][0], score[i][1], score[i][2], sum[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", score[0][i] + score[1][i] + score[2][i]);
    }
    printf("%d ", sum[0] + sum[1] + sum[2]);

    return 0;
}
