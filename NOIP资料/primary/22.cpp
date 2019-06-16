#include <iostream>
#include <cstdio>

using namespace std;

int main()
{	
	double tmp, sum = 0.0;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		sum += tmp;
	}
	sum /= n;
	printf("%.2f", sum);
	return 0;
}
