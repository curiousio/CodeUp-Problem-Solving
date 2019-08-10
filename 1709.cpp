#include <algorithm>

using namespace std;

int main()
{
    int n, data[100];

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &data[i]);
    }

    sort(data, data + n);

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", data[i]);
    }

    return 0;
}
