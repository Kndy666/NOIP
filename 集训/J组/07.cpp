#include <iostream>

using namespace std;

int main()
{
	int a[25];
	cin >> a[0] >> a[1] >> a[2];
	
	for (int i = 3; i <= 20; i++)
	{
		a[i] = a[i - 3] + 2 * a[i - 2] + a[i - 1];
	} 
	
	for (int i = 0; i <= 20; i++)cout << a[i] << ' ';
	cout << endl;
	
}
