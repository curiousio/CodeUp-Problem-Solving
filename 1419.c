#include <stdio.h>
#include <string.h>

int main()
{
    int i, count = 0;
    char str[100];

    gets(str);

    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'l')
        {
            if (str[i + 1] == 'o')
            {
                if (str[i + 2] == 'v')
                {
                    if (str[i + 3] == 'e')
                    {
                        count++;
                        i += 3;
                    }
                }
            }
        }
    }

    printf("%d", count);

    return 0;
}
