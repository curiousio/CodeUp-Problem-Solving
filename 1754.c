#include <stdio.h>
#include <string.h>

int main()
{
    char a[101], b[101];

    scanf("%s", a);
    scanf("%s", b);

    if (strlen(a) < strlen(b))
    {
        printf("%s %s", a, b);
    }
    else if (strlen(a) > strlen(b))
    {
        printf("%s %s", b, a);
    }
    else
    {
        if (strcmp(a, b) < 0)
        {
            printf("%s %s", a, b);
        }
        else
        {
            printf("%s %s", b, a);
        }
    }

    return 0;
}
