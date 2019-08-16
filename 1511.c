#include <stdio.h>

int main()
{
	int n, arr[100][100], sum = 0, temp = 1;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = temp;
			temp++;
		}
	}
	
	for (int i = 0; i < n; i++)
	{
		sum += arr[i][0];
		sum += arr[0][i];
		sum += arr[i][n - 1];
		sum += arr[n - 1][i];
	}

	sum -= arr[0][0];
	sum -= arr[n - 1][0];
	sum -= arr[0][n - 1];
	sum -= arr[n - 1][n - 1];

	printf("%d", sum);

	return 0;
}
