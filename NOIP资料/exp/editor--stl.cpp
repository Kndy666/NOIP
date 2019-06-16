#include <iostream>
#include <stack>

using namespace std;

void clear(stack<char>& stk)
{
	stack<char> empty;
	swap(empty, stk);
}

int main()
{
	string str, ans = "";
	stack<char> stk;
	getline(cin, str);
	int top = 0;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == '@')
		{
			clear(stk);
		}
		else if (str[i] == '#')
		{
			stk.pop();
		}
		else
		{
			stk.push(str[i]);
		}
	}
	while (!stk.empty())
	{
		ans = stk.top() + ans;
		stk.pop();
	}
	cout << ans << endl;
	return 0; 
}
