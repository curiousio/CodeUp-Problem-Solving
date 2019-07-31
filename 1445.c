#include <stdio.h>

int main()
{
    int a, b, new[2000], temp;

    scanf("%d %d", &a, &b);

    for (int i = 0; i < a; i++)
    {
        scanf("%d", &new[i]);
    }
    for (int i = a; i < a + b; i++)
    {
        scanf("%d", &new[i]);
    }

    for (int i = 0; i < a + b - 1; i++)
    {
        for (int j = 0; j < a + b - i - 1; j++)
        {
            if (new[j] > new[j + 1])
            {
                temp = new[j];
                new[j] = new[j + 1];
                new[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < a + b; i++)
    {
        printf("%d ", new[i]);
    }

    return 0;
}
