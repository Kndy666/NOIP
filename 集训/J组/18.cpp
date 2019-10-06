#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <climits>

using namespace std;

string str[500005];
long long num[500005];

int main()
{
	freopen("in.txt", "r", stdin);
	int count = 0; 
	while(cin >> str[count])count++;
	//for (int i = 0; i < count; i++)cout << str[i] << endl;
	for (int i = 0; i < count; i++)
	{
		long long tmp = 0;
		int t = 0;
		for (int j = str[i].size() - 1; j >= 2; j--)
		{
			//cout << str[i][j] - 55 << ' ';
			if (str[i][j] >= 'A' && str[i][j] <= 'Z')tmp += (str[i][j] - 55) * pow(36, t);
			else tmp += (str[i][j] - '0') * pow(36, t);
			t++; 
		}
		num[i] = tmp;
	}
	sort(num, num + count);
	
	//for (int i = 0; i < count; i++)cout << num[i] << ' ';
	
	long long ans = LONG_LONG_MAX;
	for (int i = 0; i < count - 1; i++)
	{
		long long tmp = abs(num[i] - num[i + 1]);
		//cout << tmp << ' ';
		if (tmp < ans)ans = tmp; 
	}
	
	cout << ans << endl;
}
