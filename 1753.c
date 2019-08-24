#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    char name[100][101];

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", &name[i][0]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = strlen(name[i]) - 1; j >= 0; j--)
        {
            printf("%c", name[i][j]);
        }
        
        printf("\n");
    }

    return 0;
}
