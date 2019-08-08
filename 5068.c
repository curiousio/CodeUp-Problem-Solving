#include <stdio.h>

int main()
{
    int month, date;

    scanf("%d", &month);
    scanf("%d", &date);

    if (month == 2 && date == 18)
    {
        printf("Special");
    }
    else if (month == 1 || (month == 2 && date < 18))
    {
        printf("Before");
    }
    else
    {
        printf("After");
    }

    return 0;
}
