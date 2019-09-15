#include <stdio.h>

void func(int n)
{
    if (n == 1)
    {
        printf("1\n");
        return;
    }
    else
    {
        if (n % 2 == 0)
        {
            func(n / 2);
        }
        else
        {
            func(n * 3 + 1);
        }
    }
    
    printf("%d\n", n);
}

int main()
{
    int n;

    scanf("%d", &n);

    func(n);

    return 0;
}
