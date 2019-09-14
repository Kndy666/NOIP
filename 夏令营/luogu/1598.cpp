#include <iostream>

using namespace std;

int list[26];

int findMax()
{
	int maxn = 0;
	for(int k = 0 ;k < 26; k++)if (maxn < list[k])maxn = list[k];
	return maxn;
} 

int main()
{
	string str;
	
	for (int j = 0; j < 4; j++)
	{
		getline(cin, str);
	
		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] >= 'A' && str[i] <= 'Z')list[str[i] - 65]++;
		}
	}
	
	//for (int i = 0; i < 26; i++)cout << list[i] << ' '; 
	
	for (int i = findMax(); i > 0; i--)
	{
		for(int j = 0; j < 26; j++)
		{
			if (list[j] >= i)cout << "* ";
			else cout << "  ";	
		}
		cout << endl; 
	}
	
	for (int i = 'A'; i <= 'Z'; i++)cout << char(i) << ' '; 
}
