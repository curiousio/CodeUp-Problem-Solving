#include <stdio.h>

int main()
{
    int n[5], temp;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &n[i]);
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

    printf("%d", n[2]);

    return 0;
}
