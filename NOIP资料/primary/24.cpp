#include <iostream>

using namespace std;

int GetNum(string str)
{
	int ans = 0;
	int len = str.size() - 1;
	int num = 1;
	
	while(len >= 0)
	{
		ans += (str[len] - '0') * num;
		num *= 10;
		len--;
	}
	return ans;	
} 

int main()
{
	string str;
	int sum = 0, begin = 0, end = 0;
	getline(cin, str);
	
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == '+')
		{
			end = i - begin;
			sum += GetNum(str.substr(begin, end)); 
			begin = i + 1;
		} 
	}
	sum += GetNum(str.substr(begin, str.size() - begin));
	cout << sum << endl;
	return 0;
} 
