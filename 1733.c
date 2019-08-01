#include <stdio.h>

int main()
{
    char input[1000];

    scanf("%s", input);

    if (input[0] == 'I' && input[1] == 'O' && input[2] == 'I' && input[3] == '\0')
    {
        printf("IOI is the International Olympiad in Informatics.");
    }
    else
    {
        printf("I don't care.");
    }

    return 0;
}
