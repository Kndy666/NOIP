#include <iostream>
#include <stack>
#include <cmath> 

using namespace std;

stack<int> S;

int main()
{
	int n, k, ans = 0;
	cin >> k >> n;
	
	while(n)
	{
		S.push(n & 1);
		n >>= 1;
	}
	
	while(!S.empty())
	{
		ans += S.top() * pow(k, S.size() - 1);
		S.pop();
	}
 } 
