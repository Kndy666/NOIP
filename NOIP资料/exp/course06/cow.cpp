#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n, d, list[105], cc = 0;
	cin >> n >> d;
	
	for (int i = 0; i < n; i++)
	{
		cin >> list[i];
	}
	
	for (int j = 0; j < n - 1; j++)
	{
		for (int k = j + 1; k < n; k++)
		{
			if (abs(list[k] - list[j]) <= d)
			{
				cc++;
			}
		}
	}
	cout << cc << endl;
	return 0;
}
