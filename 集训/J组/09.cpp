#include <iostream>

using namespace std;

int main()
{
	int a[55] = {0};
	
	for (int i = 2;i <= 52; i++)
	{
		int tmp = i;
		while(tmp < 52)
		{
			a[tmp] = 1;
			tmp += tmp;
		}
	}
	
	int ans = 0;
	for(int i = 1; i <= 52; i++)if (a[i] == 0)ans++;
	cout << ans << endl; 
}
