#include <stdio.h>
#include <string.h>

char pw[11];
char a[11], b[11], c[11];

int check(char *i, int j)
{
    int len = strlen(i);
    for (int k = 0; k < 10; k++)
    {
        if (pw[k] == i[j])
        {
            return k;
        }
    }

    return -1;
}

int main()
{
    scanf("%s", pw);
    scanf("%s %s %s", a, b, c);

    for (int i = 1; i <= 3; i++)
    {
        int len;
        if (i == 1)
        {
            len = strlen(a);
        }
        else if (i == 2)
        {
            len = strlen(b);
        }
        else if (i == 3)
        {
            len = strlen(c);
        }

        for (int j = 0; j < len; j++)
        {
            if (i == 1)
            {
                printf("%d", check(a, j));
            }
            else if (i == 2)
            {
                printf("%d", check(b, j));
            }
            else if (i == 3)
            {
                printf("%d", check(c, j));
            }
        }
        printf(" ");
    }

    return 0;
}
