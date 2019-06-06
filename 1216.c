#include <stdio.h>

int main()
{
	int noad, yesad, monad, a;

	scanf("%d %d %d", &noad, &yesad, &monad);

	a = yesad - monad;

	if (a > noad)
	{
		printf("advertise");
	}
	else if (a < noad)
	{
		printf("do not advertise");
	}
	else
	{
		printf("does not matter");
	}

	return 0;
}
