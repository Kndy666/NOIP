#include <iostream>

using namespace std;

int main()
{
	int n, tmp = 0, sum = 0;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		tmp *= 10;
		tmp += n;
		sum += tmp;
	}
	cout << sum << endl;
	return 0;
}
