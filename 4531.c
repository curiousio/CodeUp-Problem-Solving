#include <stdio.h>

int main()
{
    int temp, n[5], sum = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &n[i]);
        sum += n[i];
    }

    for (int i = 0; i < 5 - 1; i++)
    {
        for (int j = 0; j < 5 - 1 - i; j++)
        {
            if (n[j] > n[j + 1])
            {
                temp = n[j];
                n[j] = n[j + 1];
                n[j + 1] = temp;
            }
        }
    }

    printf("%d\n%d", sum / 5, n[2]);

    return 0;
}
