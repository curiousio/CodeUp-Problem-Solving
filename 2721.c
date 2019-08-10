#include <stdio.h>
#include <string.h>

int main()
{
    int len, f1 = 0, f2 = 0, f3 = 0;
    char s1[20], s2[20], s3[20];

    scanf("%s", s1);
    scanf("%s", s2);
    scanf("%s", s3);

    len = strlen(s1) - 1;
    if (s1[len] == s2[0])
    {
        f1 = 1;
    }
    len = strlen(s2) - 1;
    if (s2[len] == s3[0])
    {
        f2 = 1;
    }
    len = strlen(s3) - 1;
    if (s3[len] == s1[0])
    {
        f3 = 1;
    }

    if (f1 == 1 && f2 == 1 && f3 == 1)
    {
        printf("good");
    }
    else
    {
        printf("bad");
    }
    
    return 0;
}
