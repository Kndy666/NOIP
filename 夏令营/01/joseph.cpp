#include <iostream>
#include <queue>

using namespace std;

int main()
{
	int m, n, num = 1;
	cin >> m >> n;
	
	queue<int> q;
	
	for (int i = 1; i <= m; i++)q.push(i);
	
	while(!q.empty()) 
	{
		int tmp = q.front();
		q.pop(); 
		if (num == n)
		{
			cout << tmp << ' '; 
			num = 0;
		}
		else
		{
			q.push(tmp);
		}
		num++;
	}
	
	return 0;
} 
