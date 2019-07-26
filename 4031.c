#include <stdio.h>

int main()
{
    int n[7], oddmax, evenmax, oddcount = 0, evencount = 0, sum = 0;

    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &n[i]);

        if (n[i] % 2 != 0)
        {
            oddcount++;
        }
        else
        {
            evencount++;
        }
    }

    if (oddcount == 0)
    {
        oddmax = 0, evenmax = n[0];

        for (int i = 0; i < 7; i++)
        {
            if (n[i] % 2 == 0)
            {
                if (evenmax < n[i])
                {
                    evenmax = n[i];
                }
            }
        }
    }
    else if (evencount == 0)
    {
        oddmax = n[0], evenmax = 0;

        for (int i = 0; i < 7; i++)
        {
            if (n[i] % 2 != 0)
            {
                if (oddmax < n[i])
                {
                    oddmax = n[i];
                }
            }
        }
    }
    else
    {
        for (int i = 0; i < 7; i++)
        {
            if (n[i] % 2 != 0)
            {
                oddmax = n[i];
            }
            else if (n[i] % 2 == 0)
            {
                evenmax = n[i];
            }
        }

        for (int i = 0; i < 7; i++)
        {
            if (n[i] % 2 != 0)
            {
                if (oddmax < n[i])
                {
                    oddmax = n[i];
                }
            }
            else if (n[i] % 2 == 0)
            {
                if (evenmax < n[i])
                {
                    evenmax = n[i];
                }
            }
        }
    }

    sum = oddmax + evenmax;
    printf("%d", sum);

    return 0;
}
