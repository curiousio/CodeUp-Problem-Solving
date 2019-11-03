#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int n, m;
int a[1000000], q[100000];

int binSearch(int *a, int c, int n)
{
	int left = 0, right = c - 1;

	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		if (*(a + mid) == n)
		{
			return mid + 1;
		}
		else if (*(a + mid) < n)
		{
			left = mid + 1;
		}
		else if (*(a + mid) > n)
		{
			right = mid - 1;
		}
	}

	return -1;
}

int main()
{
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &q[i]);
	}

	sort(a, a + m);

	for (int i = 0; i < m; i++)
	{
		printf("%d ", binSearch(a, n, q[i]));
	}

	return 0;
}
