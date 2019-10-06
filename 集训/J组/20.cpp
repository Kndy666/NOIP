#include <iostream>

using namespace std;

struct pos
{
	int num;
	string roman;
}a[13];

int main()
{
	int n;
	cin >> n;
	
	int num[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
	string c[13] = {"m", "cm", "d", "cd", "c", "xc", "l", "xl", "x", "ix", "v", "iv", "i"};
	
	string ans;
	
	for (int i = 0; i < 13; i++)
		while(n >= num[i])
		{
			n -= num[i];
			ans += c[i];
		}
	cout << ans << endl;
 } 
