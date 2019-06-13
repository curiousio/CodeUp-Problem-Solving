#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char password[201];

    gets(password);

    for (i = 0; i < strlen(password); i++)
    {
        if (password[i] == 32)
        {
            printf(" ");
        }
        else
        {
            if (password[i] == 'a' || password[i] == 'b' || password[i] == 'c' || password[i] == 'A' || password[i] == 'B' || password[i] == 'C')
            {
                password[i] += 23;
            }
            else
            {
                password[i] -= 3;
            }

            printf("%c", password[i]);
        }
    }

    return 0;
}
