#include <stdio.h>

int main()
{
    int a, b, temp;
    
    scanf("%d %d", &a, &b);

    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }

    if ((a == 1 && b == 1) || (a == 1 && b == 2) || (a == 1 && b == 3) || (a == 2 && b == 2) || (a == 2 && b == 3))
    {
        printf("angry");
    }
    else
    {
        printf("no angry");
    }
    
    return 0;
}
