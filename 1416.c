#include <stdio.h>

int main()
{
    int n, loc = 0, binary[100000] = { 0 };

    scanf("%d", &n);

    if (n == 0)
    {
        printf("0");

        return -1;
    }

    while (n != 0)
    {
        binary[loc] = n % 2;
        n /= 2;
        loc++;
    }

    for (int i = loc - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }

    return 0;
}
