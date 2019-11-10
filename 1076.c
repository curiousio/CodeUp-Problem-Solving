#include <stdio.h>

int main()
{
	char a = 'a', input;

	scanf("%c", &input);

	while (1)
	{
		printf("%c ", a);
		a += 1;

		if (a > input)
		{
			break;
		}
	}

	return 0;
}
