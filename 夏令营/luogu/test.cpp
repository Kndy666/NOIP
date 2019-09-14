#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	string str;
	cin >> str; 
	for (int i = 0; i < str.size(); i++)
  	{
    	char ch = str[i];
    	if (ch > 'z' - n && ch <= 'z')
    	{
      		str[i] = str[i] - 26 + n;
    	}
    	else
    	{
      		str[i] = str[i] + n;
    	}
  	}
  	
  	cout << str << endl;
}
