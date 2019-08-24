#include <stdio.h>

int main()
{
	int n;
	char str[300][100];

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%s", str[i]);
	}

	for (int i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%s\n", str[i]);
		}
		else
		{
			printf("%s\n", str[i]);
			printf("AMOLED\n");
		}
	}

	return 0;
}
