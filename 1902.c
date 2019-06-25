#include <stdio.h>

void func(int n);

int main()
{
    int n;

    scanf("%d", &n);

    func(n);

    return 0;
}

void func(int n)
{
    printf("%d\n", n);

    if (n == 1)
    {
        return;
    }

    func(n - 1);
}
