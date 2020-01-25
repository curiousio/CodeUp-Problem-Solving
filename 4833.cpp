#include <stack>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
	int len, cnt = 0;
	char input[100001];
	stack<char> steel;

	scanf("%s", input);
	len = strlen(input);
	for (int i = 0; i < len; i++)
	{
		if (input[i] == '(')
		{
			steel.push(input[i]);
		}
		else
		{
			steel.pop();
			if (input[i - 1] == '(')
			{
				cnt += steel.size();
			}
			else
			{
				cnt++;
			}
		}
	}

	printf("%d", cnt);

	return 0;
}
