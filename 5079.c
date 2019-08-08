#include <stdio.h>

int main()
{
    int v, acount = 0, bcount = 0;
    char temp[15];

    scanf("%d", &v);
    scanf("%s", temp);

    for (int i = 0; i < v; i++)
    {
        if (temp[i] == 'A')
        {
            acount++;
        }
        else
        {
            bcount++;
        }
    }

    if (acount == bcount)
    {
        printf("Tie");
    }
    else if (acount > bcount)
    {
        printf("A");
    }
    else
    {
        printf("B");
    }

    return 0;
}
