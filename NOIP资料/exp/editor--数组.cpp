#include <iostream>

using namespace std;

int main()
{
	string str;
	char chInput[105];
	getline(cin, str);
	int top = 0;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == '@')
		{
			top = 0;
		}
		else if (str[i] == '#')
		{
			top--;
		}
		else
		{
			top++;
			chInput[top] = str[i];
		}
	}
	
	for (int j = 1; j <= top; j++)
	{
		cout << chInput[j];
	}
	cout << endl;
	return 0;
} 
