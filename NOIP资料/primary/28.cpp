#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int n, tmp = 1, sum = 0;
	double ans = 0.0;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		sum += tmp;
		tmp *= 2;
	}
	ans = sum / 100.00;
	printf("%.2f", ans);
	return 0;
}
