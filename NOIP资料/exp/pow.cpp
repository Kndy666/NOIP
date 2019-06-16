#include <iostream>
#include <cstdio>

using namespace std;

string PowStr(int n)
{
	int i = 0;	
	string str = "";
	while (n)
	{
		if(n & 1)
		{
			str = "+" + str;
			if (i == 0)
				str = "2(0)" + str;
			else if (i == 1)
				str = "2" + str;
			else if (i == 2) 
				str = "2(2)" + str;
			else
				str = "2(" + PowStr(i) + ")" + str;
		}
		i++;
		n >>= 1;
	}
	str = str.substr(0, str.size() - 1);
	return str;
}

int main()
{
//	freopen("pow.in", "r", stdin);
//	freopen("pow.out", "w", stdout);
	
	int n;
	cin >> n;
	cout << PowStr(n) << endl;
	return 0;	
}
