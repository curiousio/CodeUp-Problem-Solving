#include <stdio.h>
#include <string.h>

int main()
{
    double n, count = 0;
    char sns[150][1000];

    scanf("%lf", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", sns[i]);
        for (int j = 0; j < strlen(sns[i]); j++)
        {
            if (sns[i][j] == ',')
            {
                count++;
            }
        }
    }

    count -= n * 2;

    printf("%.2lf", count / n);

    return 0;
}
