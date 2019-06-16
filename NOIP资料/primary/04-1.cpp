#include <cstdio>

using namespace std;

int main()
{
	int m, n;
	scanf("%d%d", &m, &n);

	for (int i = m * 100; i < m * 100 + 100; i++)
	{
		int res = 0;
		if (i % n == 0)
		{
			res = i % 100;
			printf("%02d ", res);
		}
	}
	return 0;
}
