#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int main()
{
    int n, score[1000];

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &score[i]);
    }

    sort(score, score + n);

    printf("%d", score[n - 1] - score[0]);

    return 0;
}
