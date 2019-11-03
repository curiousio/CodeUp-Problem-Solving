#include <stdio.h>

int main()
{
	int n, sum = 0;

	scanf("%d", &n);

	for (int i = 2; i <= n; i++)
	{
		int count = 0;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				count++;
				break;
			}
		}
		if (count == 0)
		{
			sum += i;
		}
	}

	printf("%d", sum);

	return 0;
}
