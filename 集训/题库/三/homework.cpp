#include <iostream>

using namespace std;

int main()
{
	int n, total = 0;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		int h, m, s;
		cin >> h >> m >> s;
		
		total += h * 3600 + m * 60 + s;
	}
	
	cout << total / 3600 << " hour " << (total - (total / 3600) * 3600) / 60 << "minute " << total % 60 << "second" << endl;
	   
 } 
