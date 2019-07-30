#include <stdio.h>
#include <string.h>

int main()
{
    int leftcount = 0, rightcount = 0;
    char str[100000];

    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == '(')
        {
            leftcount++;
        }
        else
        {
            rightcount++;
        }
    }

    printf("%d %d", leftcount, rightcount);

    return 0;
}
