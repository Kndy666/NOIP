#include <iostream>

using namespace std;

int main()
{
	string str;
	getline(cin, str);
	
	int begin = 0, length;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == ',')
		{
			length = i - begin + 1; 
			cout << str.substr(begin, length - 1) << endl;
			begin += length; 
		}
	}
	cout << str.substr(begin, length + 1) << endl;
	return 0;
}
