#include <iostream>
using namespace std;
int max_of_four(int a, int b, int c, int d)
{
	if (a > b)
	{
		if (a > c)
		{
			if (a > d)
			{
				return a;
			}
			else if (a < d)
			{
				return d;
			}
		}
		else if (a < c)
		{
			if (c > d)
			{
				return c;
			}
			else if (c < d)
			{
				return d;
			}
		}

	}
	else if (a < b)
	{
		if (b > c)
		{
			if (b > d)
			{
				return b;
			}
			else if (b < d)
			{
				return d;
			}
		}
		else if (b < c)
		{
			if (c > d)
			{
				return c;
			}
			else if (c < d)
			{
				return d;
			}
		}
	}
}

int main() {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	int ans = max_of_four(a, b, c, d);
	printf("%d", ans);

	return 0;
}