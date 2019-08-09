#include <stdio.h>

int main()
{
    int m, n, count = 0, sum = 0, num[10000];

    scanf("%d %d", &m, &n);

    for (int i = m; i <= n; i++)
    {
        int check = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                check++;
            }
        }
        if (check == 2)
        {
            sum += i;
            num[count] = i;
            count++;
        }
    }

    if (count == 0)
    {
        printf("-1");
    }
    else
    {
        printf("%d\n%d", sum, num[0]);
    }

    return 0;
}
