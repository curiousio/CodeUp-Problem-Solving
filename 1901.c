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
    if (n == 0)
    {
        return;
    }

    func(n - 1);

    printf("%d\n", n);
}
