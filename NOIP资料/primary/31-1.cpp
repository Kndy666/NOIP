#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, list[105], cc = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> list[i];
	}
	
	sort(list, list + n);
	for (int j = 0; j < n - 1; j++)
	{
		if (list[j + 1] - list[j] == 1)
			cc++;
	}
	cout << cc << endl;
	return 0;
} 
