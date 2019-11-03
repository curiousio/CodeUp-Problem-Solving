#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int main()
{
    int sum = 0;
    int height[9];

    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &height[i]);
        sum += height[i];
    }

    for (int i = 0; i < 9; i++)
    {
        int check = 0;
        for (int j = i + 1; j < 9; j++)
        {
            if (sum - height[i] - height[j] == 100)
            {
                height[i] = -1;
                height[j] = -1;
                check = 1;
                break;
            }
        }
        if (check == 1)
        {
            break;
        }
    }

    sort(height, height + 9);

    for (int i = 2; i < 9; i++)
    {
        printf("%d\n", height[i]);
    }

    return 0;
}
