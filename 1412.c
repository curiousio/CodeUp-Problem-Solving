#include <stdio.h>
#include <string.h>

int main()
{
    int i, count[26] = { 0 };
    char d[90], alpha = 'a';

    gets(d);

    for (i = 0; i < strlen(d); i++)
    {
        if (d[i] >= 'a' && d[i] <= 'z')
        {
            count[d[i] - 'a']++;
        }
    }

    for (i = 0; i < 26; i++)
    {
        printf("%c:%d\n", alpha, count[i]);
        alpha++;
    }

    return 0;
}
