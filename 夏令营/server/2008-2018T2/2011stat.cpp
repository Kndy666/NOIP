#include <iostream>
#include <cstdio> 

using namespace std;

string ToUpper(string str)
{
	for (int i = 0; i < str.size(); i++)
	{
		char ch = str[i];
		if (ch >= 'a' && ch <= 'z')
		{
			str[i] = ch - 32;	
		}	
	} 
	return str;
}

int main()
{
	freopen("stat.in", "r", stdin);
	freopen("stat.out", "w", stdout);
	
	string strW, strS, tmp = "";
	int begin = 0, cc = 0, ans = 0;
	
	getline(cin, strW);
	getline(cin, strS);
	strW = ToUpper(strW);
	
	while (strS[begin] == ' ')
	{
		begin++;
	}
	
	for (int i = begin; i < strS.size(); i++)
	{
		if (strS[i] != ' ') 
		{
			tmp += strS[i];
		}
		else
		{
			if (ToUpper(tmp) == strW)
			{
				cc++;	
				if (cc == 1)
				{
					ans = i - tmp.size();
				}
			}
			tmp = "";
		}	
	}
	
	if (ToUpper(tmp) == strW)
	{
		cc++;		
		if (cc == 1)
		{
			ans = strS.size() - tmp.size();
		}
	}
	
	if (cc == 0)
		cout << -1 << endl;
	else
		cout << cc << ' ' << ans << endl;
	return 0;
}
