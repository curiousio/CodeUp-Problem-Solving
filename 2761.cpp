#include <algorithm>

using namespace std;

int main()
{
    int a, b, data[3];

    scanf("%d %d", &a, &b);

    data[0] = a + b;
    data[1] = a - b;
    data[2] = a * b;

    sort(data, data + 3);
    
    printf("%d", data[1]);

    return 0;
}
