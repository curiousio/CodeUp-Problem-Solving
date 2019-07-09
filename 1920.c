#include <stdio.h>

int tentwo(int n);

int main()
{
	int n;

	scanf("%d", &n);

	tentwo(n);

	return 0;
}

int tentwo(int n)
{
	if (n / 2 != 0)
	{
		tentwo(n / 2);
		printf("%d", n % 2);
	}
	else
	{
		printf("%d", n % 2);
	}
}
