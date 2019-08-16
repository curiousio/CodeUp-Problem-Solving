#include <stdio.h>

int x1, y1, x2, y2, sum;
int S[100][100];

int main()
{
	for (int i = 1; i <= 4; i++)
	{
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

		for (int j = x1; j < x2; j++)
		{
			for (int k = y1; k < y2; k++)
			{
				S[j][k] = 1;
			}
		}
	}

	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (S[i][j] == 1)
			{
				sum++;
			}
		}
	}

	printf("%d", sum);

	return 0;
}
