#include <iostream>

using namespace std;

int main()
{
	double l, cc = 0, tmp = 2, cc1 = 0;
	cin >> l;
	
	while(cc < l)
	{
		tmp *= 0.98;
		cc += tmp;
		cc1++;
	}
	
	cout << cc1 << endl;
} 
