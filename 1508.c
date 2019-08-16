#include <stdio.h>

int main()
{
	int n, k, iq[20][20];

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &iq[i][0]);
	}

	for (int i = 1; i < n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			iq[i][j] = iq[i][j - 1] - iq[i - 1][j - 1];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%d ", iq[i][j]);
		}
		printf("\n");
	}

	return 0;
}
