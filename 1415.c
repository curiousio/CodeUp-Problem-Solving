#include <stdio.h>

int main()
{
	int i, n, evenmax = 0, oddmax = 0;

	for (i = 1; i <= 10; i++)
	{
		scanf("%d", &n);

		if (n % 2 == 0)
		{
			if (evenmax < n)
			{
				evenmax = n;
			}
		}
		else
		{
			if (oddmax < n)
			{
				oddmax = n;
			}
		}
	}

	if (evenmax == 0)
	{
		printf("%d", oddmax);
	}
	else if (oddmax == 0)
	{
		printf("%d", evenmax);
	}
	else
	{
		printf("%d %d", oddmax, evenmax);
	}

	return 0;
}
