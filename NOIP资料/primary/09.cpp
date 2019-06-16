#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
	int n;
	double list[105], max = -1.0, min = 101.0, sum = 0.0, res = 0.0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> list[i];
	}
	
	for (int m = 0; m < n; m++)
	{
		sum += list[m];
		if (list[m] < min)
		{
			min = list[m];
		}
		
		if (list[m] > max)
		{
			max = list[m];
		}
	}
	
	res = (sum - min - max) / (n - 2);
	
	printf("%.2f", res);
	return 0;	
} 
