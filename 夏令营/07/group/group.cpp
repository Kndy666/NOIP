#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	freopen ("group.in", "r", stdin);
	freopen ("group.out", "w", stdout);

	int w, n, v[30005], ans = 0;

	cin >> w >> n;
	for (int i = 0; i < n; i++)cin >> v[i];

	sort (v, v + n);
	
	int front = 0, rear = n - 1;
	while (front < rear)
	{
	  if (v[front] + v[rear] <= w)
	  {
	    front++;
	    rear--;
	    ans++;
	  }
	  else
	  {
	    rear--;
	    ans++;
	  }
	}

	if (front == rear)ans++;
	cout << ans << endl;
	return 0;
}
