#include <stdio.h>

int main()
{
	int start, count;
	char str[100];

	scanf("%s", str);
	scanf("%d %d", &start, &count);

	for (int i = start; i < start + count; i++)
	{
		printf("%c", str[i]);
	}

	return 0;
}
