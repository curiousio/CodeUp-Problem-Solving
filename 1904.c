#include <stdio.h>

void func(int a, int b);

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    func(a, b);

    return 0;
}

void func(int a, int b)
{
    if (a % 2 != 0)
    {
        printf("%d ", a);
    }

    if (a == b)
    {
        return;
    }

    func(a + 1, b);
}
