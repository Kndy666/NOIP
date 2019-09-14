#include <iostream>
#include <cstdio>

using namespace std;

int _dp[1005];

int num(int begin)
{
    if(_dp[begin])return _dp[begin];
    else
    {
    	for(int i = 1; i <= begin / 2; i++)
		{
			_dp[begin] += num(i);
    	}
    	_dp[begin]++;
	}
	return _dp[begin];
}

int main()
{
	//freopen("data.out", "w", stdout); 
	int begin;
	cin >> begin;
	
	_dp[1] = 1;
	cout << num(begin) << endl;
	
	//cout << ans << endl;
}
