#include <iostream>
#include <queue>

using namespace std;

int main()
{
	int m, n, k;
	cin >> m >> n >> k;
	queue<int> mQ;
	queue<int> nQ;
	for (int i = 1; i <= m; i++)
	{
		mQ.push(i);	
	}
	for (int j = 1; j <= n; j++)
	{
		nQ.push(j);	
	}
	
	for (int l = 1; l <= k; l++)
	{
		cout << mQ.front() << ' ' << nQ.front() << endl;
		mQ.push(mQ.front());
		nQ.push(nQ.front());
		mQ.pop();
		nQ.pop();
	}
	return 0;	
} 
