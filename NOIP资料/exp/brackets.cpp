#include <iostream> 
#include <stack>

using namespace std;

int main()
{
	string str;
	stack<char> stkCh;
	cin >> str;
	bool flag = true;
	for (int i = 0; i < str.size(); i++)
	{
		char tmp = str[i];
		if (tmp == '(' || tmp == '[')
			stkCh.push(tmp);
		else
		{
			if (stkCh.empty())
				flag = false;
			else
			{
				if (stkCh.top() == '(')
				{
					if (tmp == ')') 
						stkCh.pop();
					else 
						flag = false;
				}
				else
				{
					if (tmp == ']') 
						stkCh.pop();
					else 
						flag = false;
				}
			}
		}
	}
	
	if (!stkCh.empty()) flag = false;
	
	if (flag) 
		cout << "OK" << endl;
	else 
		cout << "wrong" << endl; 
	
	return 0;
}
