#include <iostream>
#include <algorithm>

using namespace std;

struct apple
{
	int height;
	int spend;
}l[5005];

bool cmp(apple a, apple b)
{
	return a.spend < b.spend;
}

int main()
{
	int n, s, ans = 0;
	cin >> n >> s;
	
	int a, b;
	cin >> a >> b;
	
	for (int i = 0; i < n; i++)cin >> l[i].height >> l[i].spend;
	
	sort(l, l + n, cmp);
	
	for (int i = 0; i < n; i++)
	{	
		if (a + b >= l[i].height && s - l[i].spend >= 0)
		{
			ans++;
			s -= l[i].spend;	
		}
	}
	
	cout << ans << endl;
}
