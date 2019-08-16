#include <stdio.h>

int main()
{
    int data[4];

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &data[i]);
    }

    for (int i = 4; i >= 0; i--)
    {
        printf("%d ", data[i]);
    }

    return 0;
}
