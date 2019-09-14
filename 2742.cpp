#include <iostream>
#include <algorithm>

using namespace std;

bool desc(int a, int b)
{
    return a > b;
}

int main()
{
    int n, power[10000], max, index, index2;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &power[i]);
    }

    sort(power, power + n, desc);

    max = power[0];
    index = 0;
    for (int i = 1; i < n; i++)
    {
        if (max < power[i])
        {
            max = power[i];
            index = i;
        }
    }

    index2 = n / 2;

    int t = power[index2];
    power[index2] = max;
    power[index] = t;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", power[i]);
    }

    return 0;
}
