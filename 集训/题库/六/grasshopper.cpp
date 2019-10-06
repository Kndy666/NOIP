#include <iostream>

using namespace std;

int main()
{
	int max = 0, pos = 0;
	string str;
	cin >> str;
	
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'Y')
		{
			if (max < i - pos)max = i - pos;
			pos = i;
		}
	}
	
	if (max == 0)max = str.size();
	cout << max << endl;
} 
