#include <iostream>

using namespace std;

int main()
{
	int res = 0, len;
	string strB;
	cin >> strB;
	
	len = strB.size();
	res = strB[len - 1] - '0';	
	for (int i = len - 2; i >= 0; i--)
	{
		res = res * 2 + (strB[i] - '0');
	}
	
	cout << res << endl;
	return 0;
} 
