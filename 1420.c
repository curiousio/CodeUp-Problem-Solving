#include <stdio.h>
#include <string.h>

int main()
{
    int n, score[50], st;
    char name[50][1000], nt[1000];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%s %d", &name[i][0], &score[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (score[j] < score[j + 1])
            {
                st = score[j];
                score[j] = score[j + 1];
                score[j + 1] = st;

                strcpy(nt, name[j]);
                strcpy(name[j], name[j + 1]);
                strcpy(name[j + 1], nt);
            }
        }
    }

    for (int i = 0; i < strlen(name[2]); i++)
    {
        printf("%c", name[2][i]);
    }

    return 0;
}
