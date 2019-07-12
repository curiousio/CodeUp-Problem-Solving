#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i, count = 0, countc = 0, countcc = 0;
    char c[100];

    gets(c);

    for (i = 0; i < strlen(c); i++)
    {
        c[i] = toupper(c[i]);
    }

    for (i = 0; i < strlen(c); i++)
    {
        if (c[i] == 'C')
        {
            countc++;
        }
    }
    for (i = 0; i < strlen(c); i++)
    {
        if (c[i] == 'C' && count == 1)
        {
            countcc++;
            if (c[i + 1] != 'C')
            {
                count = 0;
            }
        }
        else if (c[i] == 'C')
        {
            count++;
        }
        else
        {
            count = 0;
        }
    }

    printf("%d\n", countc);
    printf("%d", countcc);

    return 0;
}
