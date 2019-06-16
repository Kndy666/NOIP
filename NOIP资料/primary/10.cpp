#include <iostream>

using namespace std;

char ToUpper(char ch)
{
	if (ch >= 'a' && ch <= 'z')
	{
		return ch - 32;
	}
	return ch;
}

int main()
{
	string str;
	getline(cin, str);
	
	str[0] = ToUpper(str[0]);
	for (int i = 1; i < str.size(); i++)
	{
		if (str[i] == ' ')
		{
			str[i + 1] = ToUpper(str[i + 1]);
		}	
	}
	cout << str << endl;	
	return 0;
}
