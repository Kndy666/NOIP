#include <iostream>

using namespace std;

int main()
{
	string str;
	cin >> str;
	int num[250], topNum = 0, topOpe = 0, len = str.size(), tmp = 0, ans = 0;
	char ope[250];
	
	for (int i = 0; i < len; i++)
	{
		if (str[i] == '+' || str[i] == '*')
		{
			num[++topNum] = tmp;
			ope[++topOpe] = str[i];
			tmp = 0;
		}
		else
		{
			tmp = tmp * 10 + (str[i] - '0');
		}		
	}
	num[++topNum] = tmp;
	
	for (int j = 1; j <= topOpe; j++)
	{
		if (ope[j] == '*')
		{
			num[j + 1] *= num[j];
			num[j] = 0;
		}	
	}
	
	for (int k = 1; k <= topNum; k++)
	{
		ans += num[k];	
	}
	cout << ans << endl;		
	return 0;
}
