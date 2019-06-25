#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char c[10];

    scanf("%s", c);

    for (i = 0; i < strlen(c); i++)
    {
        if (c[i] == 't')
        {
            printf("%d ", i + 1);
        }
    }

    return 0;
}
