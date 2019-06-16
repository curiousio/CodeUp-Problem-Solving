#include <stdio.h>

int main()
{
    int year, month, flag = 0;

    scanf("%d %d", &year, &month);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        flag = 1;
    }

    if (month == 2 && flag == 1)
    {
        printf("29");
    }
    else if (month == 2)
    {
        printf("28");
    }
    else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        printf("31");
    }
    else
    {
        printf("30");
    }

    return 0;
}
