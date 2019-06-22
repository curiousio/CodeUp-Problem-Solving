#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char plain[201];

    gets(plain);

    for (i = 0; i < strlen(plain); i++)
    {
        if (plain[i] == ' ')
        {
            printf(" ");
        }
        else
        {
            if (plain[i] == 'x' || plain[i] == 'y' || plain[i] == 'z' || plain[i] == 'X' || plain[i] == 'Y' || plain[i] == 'Z')
            {
                plain[i] -= 23;
            }
            else
            {
                plain[i] += 3;
            }

            printf("%c", plain[i]);
        }
    }

    return 0;
}
