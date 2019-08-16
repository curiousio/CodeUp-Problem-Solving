#include <stdio.h>

int main()
{
    int input, hou, min, sec;

    scanf("%d", &input);

    hou = input / 3600;
    input -= 3600 * hou;
    min = input / 60;
    input -= 60 * min;
    sec = input % 60;

    printf("%d %d %d", hou, min, sec);

    return 0;
}
