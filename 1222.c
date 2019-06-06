#include <stdio.h>

int main()
{
    int time, score1, score2, remain, i;

    scanf("%d %d %d", &time, &score1, &score2);

    remain = 90 - time;

    for (i = 0; i <= remain - 1; i += 5)
    {
        score1++;
    }

    if (score1 > score2)
    {
        printf("win");
    }
    else if (score1 < score2)
    {
        printf("lose");
    }
    else
    {
        printf("same");
    }

    return 0;
}
