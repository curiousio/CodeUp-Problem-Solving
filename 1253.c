#include <stdio.h>

int main()
{
	int a, b, i;

	scanf("%d %d", &a, &b);

	if (a > b)
	{
		i = a;
		a = b;
		b = i;
	}

	for (i = a; i <= b; i++)
	{
		printf("%d ", i);
	}

	return 0;
}
