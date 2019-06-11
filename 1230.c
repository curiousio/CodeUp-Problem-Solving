#include <stdio.h>

int main()
{
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	if (a > 170 && b > 170 && c > 170)
	{
		printf("PASS");
	}
	else
	{
		if (a <= 170)
		{
			printf("CRASH %d", a);
		}
		else if (b <= 170)
		{
			printf("CRASH %d", b);
		}
		else
		{
			printf("CRASH %d", c);
		}
	}

	return 0;
}
