#include <iostream>
#include <cstdio>

using namespace std;

char toUpper(char word)
{
  	if (word >= 'a' && word <= 'z')return word - 32;
  	else return word;
}

int main()
{
	int t;
	cin >> t;
	
	for (int i = 0; i <= t; i++)
	{
		string str;
		getline(cin, str);
		str = ' ' + str;
		
		for (int j = 0; j < str.size(); j++)
		{
			if (str[j] == ' ')cout << toUpper(str[j + 1]); 
		}
		cout << endl;
	}
}
