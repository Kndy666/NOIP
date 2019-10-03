#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(int a, int b)
{
	return a > b;
}

int main()
{
	int n, a[1005], b[1005];
	cin >> n;
	
	for (int i = 0; i < n; i++)cin >> a[i];
	for (int i = 0; i < n; i++)b[i] = a[i];

	sort(a, a + n);
	sort(b, b + n, cmp);
	
	//for (int i = 0; i < n; i++)cout << a[i] << endl;
	
	for (int i = 0; i < n / 2; i++)
	{
		cout << b[i] << endl << a[i] << endl;  
	}
	
	if(n % 2 == 1)cout << a[n / 2 + 1] << endl;
	
}
