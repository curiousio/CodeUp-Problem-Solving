#include <stdio.h>

int fi(int n);

int main()
{
	int n;

	scanf("%d", &n);

	printf("%d", fi(n));

	return 0;
}

int fi(int n)
{
	if (n == 1 || n == 2)
	{
		return 1;
	}
	else
	{
		return fi(n - 1) + fi(n - 2);
	}
}
