#include <iostream>

using namespace std;

int main()
{
	int r, m, y;
	
	cin >> r >> m >> y;
	int ans = m, year = 0;
	
	while(ans < y)
	{
		ans += r * 0.01 * ans;
		year++;
	 } 
	 
	if (ans > y)year--; 
	cout << year << endl; 
}
