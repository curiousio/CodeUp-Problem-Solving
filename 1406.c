#include <stdio.h>
#include <string.h>

int main()
{
    char word[1000];

    scanf("%s", word);

    if (strcmp(word, "love") == 0)
    {
        printf("I love you.");
    }

    return 0;
}
