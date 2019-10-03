#include <iostream>

using namespace std;

int finder(char ch)
{
	switch(ch)
	{
		case 'H':
			return 1;
		case 'C':
			return 12;
		case 'N':
			return 14;
		case 'O':
			return 16;
		case 'F':
			return 19;
		case 'P':
			return 31;
		case 'S':
			return 32;
		case 'K':
			return 39; 
	}
}

int main()
{
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;
		
		int ans = 0;
		
		for (int j = 0; j < str.size(); j++)
		{
			if (str[j] >= '0' && str[j] <= '9')
			{
				int times = str[j] - '0';
				ans += (times - 1) * finder(str[j - 1]);
				//ans -= finder(str[j - 1]);
			}
			else ans += finder(str[j]);
		}
		cout << ans << endl;
	}
}
