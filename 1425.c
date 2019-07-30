#include <stdio.h>

int main()
{
    int n, c, height[99], temp, count = 0;

    scanf("%d %d", &n, &c);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &height[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (height[j] > height[j + 1])
            {
                temp = height[j];
                height[j] = height[j + 1];
                height[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", height[i]);
        count++;

        if (count == c)
        {
            printf("\n");
            count = 0;
        }
    }

    return 0;
}
