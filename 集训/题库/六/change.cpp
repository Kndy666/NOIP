#include <iostream>
#include <cmath> 

using namespace std;

int main()
{
	int n, ans = 0, t = 0;
	string x;
	cin >> n >> x;
	
	for (int i = x.size() - 1; i >= 0; i--)
	{
		ans += (x[i] - '0') * pow(n, t);
		t++;
	}
	
	cout << ans << endl;
}
