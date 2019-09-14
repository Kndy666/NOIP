#include <iostream>

using namespace std;

int main()
{
	string str;
	int cc = 0;
	getline(cin, str);
	
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] != ' ')cc++;
	} 
 
 	cout << cc << endl;
 	return 0;
} 
