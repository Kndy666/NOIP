#include <iostream>

using namespace std;

int main()
{
	int n, a = 0, b = 0, c = 0;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		int tmp;
		cin >> tmp;
		a += tmp;
		cin >> tmp;
		b += tmp;
		cin >> tmp;
		c += tmp;
	}
	
	cout << a <<  ' ' << b << ' ' << c  << ' ' << a + b + c << endl;
	
}
