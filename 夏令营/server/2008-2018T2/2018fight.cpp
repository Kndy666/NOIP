#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
	freopen("fight.in", "r", stdin);
	freopen("fight.out", "w", stdout);
	
	int n, m, p1, p2;
	long long marole = 0, s1, s2, min, list[100005];
	
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> list[i];
	}
	cin >> m >> p1 >> s1 >> s2;
	for (int i = 1; i <= n; i++)
	{
		marole += (i - m) * list[i];
	}
	marole += (p1 - m) * s1;
	p2 = 1;
	min = abs(marole + (1 - m) * s2);
	for (int i = 1; i <= n; i++)
	{
		long long tmp = abs(marole + (i - m) * s2);
		if (tmp < min)
		{
			min = tmp;
			p2 = i;
		}
	}
	cout << p2 << endl;
	return 0;
}
