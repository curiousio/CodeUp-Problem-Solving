#include <stdio.h>

int main()
{
	int n, m, arr[100][100], count = 1;

	scanf("%d %d", &n, &m);

	for (int i = m - 1; i >= 0; i--)
	{
		for (int j = 0; j < n; j++)
		{
			arr[j][i] = count++;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
