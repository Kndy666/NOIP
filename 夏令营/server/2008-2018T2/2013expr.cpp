#include <iostream>
#include <cstdio>
#include <stack>

using namespace std;

int main()
{
	freopen("expr.in", "r", stdin);
	freopen("expr.out", "w", stdout);
	
	long long sum = 0, tmp;
	char ch;
	stack<long long> num;
	
	cin >> tmp;
	num.push(tmp);
	
	while(cin >> ch >> tmp)
	{
		if (ch == '*')
		{
			tmp *= num.top();
			num.pop();
			num.push(tmp);
		}
		else
		{
			num.push(tmp);
		}			
	}

	while (!num.empty())
	{
		sum += num.top();
		num.pop();
	}
	cout << sum % 10000 << endl;
	return 0;
} 
