#include <stdio.h>

int main()
{
    int n[7], temp;

    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &n[i]);
    }

    for (int i = 0; i < 7 - 1; i++)
    {
        for (int j = 0; j < 7 - 1 - i; j++)
        {
            if (n[j] < n[j + 1])
            {
                temp = n[j];
                n[j] = n[j + 1];
                n[j + 1] = temp;
            }
        }
    }

    printf("%d\n", n[0]);
    printf("%d", n[1]);

    return 0;
}
