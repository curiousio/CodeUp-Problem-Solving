#include <algorithm>

using namespace std;

int main()
{
    int n, data[50000], sorted[50000], count[50000];

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &data[i]);
        sorted[i] = data[i];
    }

    sort(sorted, sorted + n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (data[i] == sorted[j])
            {
                count[i] = j;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", count[i]);
    }

    return 0;
}
