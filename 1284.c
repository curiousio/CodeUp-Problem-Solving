#include <stdio.h>

int main()
{
    int n, i = 2, ch = 0;

    scanf("%d", &n);

    while (i < n)
    {
        if (n % i == 0)
        {
            ch = 1;
            
            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    ch = 0;
                }
            }
            for (int j = 2; j < n / i; j++)
            {
                if ((n / i) % j == 0)
                {
                    ch = 0;
                }
            }
        }
        if (ch == 1)
        {
            break;
        }

        i++;
    }

    if (ch == 1)
    {
        printf("%d %d", i, n / i);
    }
    else
    {
        printf("wrong number");
    }

    return 0;
}
