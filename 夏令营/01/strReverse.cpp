#include <iostream>

using namespace std;

int main()
{
	string str;
	getline(cin, str);
	
	string ans(str.rbegin(), str.rend());
	cout << ans << endl;
	return 0;
	
}
