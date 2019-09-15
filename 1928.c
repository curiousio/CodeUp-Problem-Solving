#include <stdio.h>

void func(int n)
{
    if (n == 1)
    {
        printf("1");
    }
    else if (n % 2 != 0)
    {
        printf("%d\n", n);
        func(n * 3 + 1);
    }
    else
    {
        printf("%d\n", n);
        func(n / 2);
    }
}

int main()
{
    int n;

    scanf("%d", &n);

    func(n);

    return 0;
}
