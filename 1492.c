#include <stdio.h>

int main()
{
    int n, s[100], new[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &s[i]);
    }

    int sum = s[0];

    for (int i = 0; i < n; i++)
    {
        new[i] = sum;
        sum += s[i + 1];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", new[i]);
    }

    return 0;
}
