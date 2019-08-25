#include <stdio.h>
#include <string.h>

int main()
{
    int len, index = 0;
    char str[101], abb[101];

    scanf("%s", str);
    len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        if (str[i] == ',')
        {
            abb[index++] = str[i + 1];
        }
        else if (i == 0)
        {
            abb[index++] = str[i];
        }
    }

    printf("%s", abb);

    return 0;
}
