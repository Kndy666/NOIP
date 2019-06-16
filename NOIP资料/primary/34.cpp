#include <iostream>

using namespace std;

int main()
{
	int n, list[1005];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> list[i];
	}
	
	for (int j = 0; j < n; j++)
	{
		int cc = 0;
		for (int k = 0; k < j + 1; k++)
		{
			if(list[j] == list[k]) cc++;
		}
		cout << cc << ' ';
	}
	cout << endl;
	return 0;
}
