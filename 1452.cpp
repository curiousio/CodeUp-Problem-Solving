#include <algorithm>

using namespace std;

int main()
{
    int n, data[100000];

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &data[i]);
    }

    sort(data, data + n);

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", data[i]);
    }

    return 0;
}
