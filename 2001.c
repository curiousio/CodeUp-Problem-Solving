#include <stdio.h>

int main()
{
	int pa1, pa2, pa3, ju1, ju2, pamin, jumin;

	scanf("%d", &pa1);
	scanf("%d", &pa2);
	scanf("%d", &pa3);
	scanf("%d", &ju1);
	scanf("%d", &ju2);

	if (pa1 <= pa2)
	{
		pamin = pa1;
	}
	else
	{
		pamin = pa2;
	}
	if (pa3 < pamin)
	{
		pamin = pa3;
	}

	if (ju1 <= ju2)
	{
		jumin = ju1;
	}
	else
	{
		jumin = ju2;
	}

	printf("%.1f", (pamin + jumin)*(110.0 / 100));

	return 0;
}
