#include <iostream>
#include <cstdio>

using namespace std;

int main()
{	
	double tmp[1000000005], sum = 0.0;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> tmp[i];
		sum += tmp[i];
	}
	
	printf("%.2f",sum);
	return 0;
}
