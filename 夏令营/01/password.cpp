#include <iostream>

using namespace std;

int main()
{
	string str;
	getline(cin, str);
	
	for (int i = 0; i < str.size(); i++)
  	{
    	char ch = str[i];
    	if (ch >= 'X' && ch <= 'Z' || ch >= 'x' && ch <= 'z')
    	{
      		str[i] = str[i] - 23;
    	}
    	else
    	{
      		str[i] = str[i] + 3;
    	}
  	}
	
	string tmp(str.rbegin(), str.rend());
	str = tmp;
	
	for (int i = 0; i < str.size(); i++)
  	{
    	if(str[i] >= 'A' && str[i] <= 'Z')
  		{
    		str[i] += 32;
  		}	 
  		else if(str[i] >= 'a' && str[i] <= 'z')
  		{
    		str[i] -= 32;
 		}
  	}
	
	cout << str << endl; 
}
