#include <stdio.h>

double abs(double n)
{
	if (n * -1 > 0)
	{
		return -n;
	}
	else
	{
		return n;
	}
}

int main()
{
	double n;

	scanf("%lf", &n);

	printf("%.10g", abs(n));

	return 0;
}
