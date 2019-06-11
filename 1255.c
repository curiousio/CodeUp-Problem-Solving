#include <stdio.h>

int main()
{
	double a, b, i;

	scanf("%lf %lf", &a, &b);

	for (i = a; i <= b; i += 0.01)
	{
		printf("%.2lf ", i);
	}

	return 0;
}
