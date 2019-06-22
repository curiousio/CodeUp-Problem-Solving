#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char plain[1000];

    scanf("%s", plain);

    for (i = 0; i < strlen(plain); i++)
    {
        if (plain[i] >= 'a' && plain[i] <= 'z')
        {
            printf("%c", plain[i] - ('a' - 'A'));
        }
        else if (plain[i] >= 'A' && plain[i] <= 'Z')
        {
            printf("%c", plain[i] + ('a' - 'A'));
        }
        else
        {
            printf("%c", plain[i]);
        }
    }

    return 0;
}
