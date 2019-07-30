#include <stdio.h>

int main()
{
    int height[10], temp;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &height[i]);
    }

    for (int i = 0; i < 10 - 1; i++)
    {
        for (int j = 0; j < 10 - i - 1; j++)
        {
            if (height[j] > height[j + 1])
            {
                temp = height[j];
                height[j] = height[j + 1];
                height[j + 1] = temp;
            }
        }
    }

    printf("%d", height[7]);

    return 0;
}
