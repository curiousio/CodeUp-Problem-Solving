#include <stdio.h>

int sum;

int fsum(int n)
{
    if (n == 1)
    {
        sum += n;
        
        return sum;
    }
    else
    {
        sum += n;
        
        return fsum(n - 1);
    }
}

int main()
{
    int n;

    scanf("%d", &n);

    printf("%d", fsum(n));

    return 0;
}
