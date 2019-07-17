#include <stdio.h>

int main()
{
    int hou, min, total;

    scanf("%d %d", &hou, &min);

    total = 60 * hou + min - 30 + 1440;

    printf("%d %d", total / 60 % 24, total % 60);

    return 0;
}
