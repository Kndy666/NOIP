#include <iostream>

using namespace std;

int main()
{
	int n, m, tmp;
	cin >> n >> m;
	
	while (n % m > 0)
	{
		tmp = n % m;
		n = m;
		m = tmp;
	}
	
	cout << m << endl;
	return 0;
} 
