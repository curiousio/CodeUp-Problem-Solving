#include <stdio.h>
#include <string.h>

char n[1000000];

int main()
{
    int len, sum = 0, flag = 0;
    scanf("%s", n);
    len = strlen(n);

    for (int i = len - 1; i >= 0; i--)
    {
        if (flag == 0 && n[i] - '0' != 0)
        {
            flag = 1;
        }
        if (flag == 1)
        {
            printf("%d", n[i] - '0');
            sum += n[i] - '0';
        }
    }

    printf("\n%d", sum);

    return 0;
}
