#include <stdio.h>
#include <string.h>

int main()
{
    int i, sum = 0;
    char n[999999];

    gets(n);

    for (i = 0; i < strlen(n); i++)
    {
        sum += n[i];
    }

    if (sum % 3 == 0)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }

    return 0;
}
