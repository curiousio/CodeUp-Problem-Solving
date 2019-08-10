#include <stdio.h>

int n;

long long int fibo(int k)
{
    if (k <= 2)
    {
        return 1;
    }

    return fibo(k - 2) + fibo(k - 1);
}

int main()
{
    scanf("%d", &n);

    printf("%lld", fibo(n));
}
