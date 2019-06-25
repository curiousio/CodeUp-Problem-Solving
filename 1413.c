#include <stdio.h>
#include <string.h>

int main()
{
	int i;
	char c[100];

	gets(c);

	for (i = strlen(c) - 1; i >= 0; i--)
	{
		printf("%c", c[i]);
	}

	return 0;
}
