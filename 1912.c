#include <stdio.h>

int fac(int n);

int main()
{
	int n;

	scanf("%d", &n);

	printf("%d", fac(n));

	return 0;
}

int fac(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return n * fac(n - 1);
	}
}
