#include <stdio.h>

int main()
{
    int sum, num;
    char arc;

    scanf("%d", &sum);

    while (1)
    {
        scanf("%1c", &arc);

        if (arc == '+')
        {
            scanf("%d", &num);
            sum += num;
        }
        else if (arc == '-')
        {
            scanf("%d", &num);
            sum -= num;
        }
        else if (arc == '*')
        {
            scanf("%d", &num);
            sum *= num;
        }
        else if (arc == '/')
        {
            scanf("%d", &num);
            sum /= num;
        }
        else
        {
            break;
        }
    }

    printf("%d", sum);

    return 0;
}
