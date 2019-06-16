#include <stdio.h>
#include <string.h>

int main()
{
    char word[101], i;

    gets(word);

    for (i = 0; i < strlen(word); i++)
    {
        if (word[i] == ' ')
        {
            continue;
        }

        printf("%c", word[i]);
    }

    return 0;
}
