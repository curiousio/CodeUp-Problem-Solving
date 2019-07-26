#include <stdio.h>

int main()
{
    int n[13];

    scanf("%1d%1d%1d%1d%1d%1d-%1d%1d%1d%1d%1d%1d%1d", &n[0], &n[1], &n[2], &n[3], &n[4], &n[5], &n[6], &n[7], &n[8], &n[9], &n[10], &n[11], &n[12]);

    if (n[6] == 1)
    {
        printf("19%d%d/%d%d/%d%d M", n[0], n[1], n[2], n[3], n[4], n[5]);
    }
    else if (n[6] == 2)
    {
        printf("19%d%d/%d%d/%d%d F", n[0], n[1], n[2], n[3], n[4], n[5]);
    }
    else if (n[6] == 3)
    {
        printf("20%d%d/%d%d/%d%d M", n[0], n[1], n[2], n[3], n[4], n[5]);
    }
    else if (n[6] == 4)
    {
        printf("20%d%d/%d%d/%d%d F", n[0], n[1], n[2], n[3], n[4], n[5]);
    }

    return 0;
}
