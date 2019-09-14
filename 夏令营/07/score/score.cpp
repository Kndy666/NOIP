#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	freopen("score.in", "r", stdin);
	freopen("score.out", "w", stdout);
	
	int a, b;
	cin >> a >> b;
	if (a < 60 && b >= 60 || b < 60 && a >= 60)cout << 1 << endl;
	else cout << 0 << endl;
	return 0;	
} 
