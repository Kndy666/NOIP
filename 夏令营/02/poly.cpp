#include <iostream>
#include <cstdio> 

using namespace std;

int main()
{
	freopen("in.txt", "r", stdin);
	int n, arr[10005], j = 0, num;
	cin >> n;
	n++;
	
	while(cin >> num)
	{ 
		arr[j] = num;
		j++;	
	}
	
	//for (int i = 0; i < j; i++)cout << arr[i] << ' '; 
	
	for (int i = j; i > 0; i--)
	{
		int a = arr[j - i];
		n--;
		if (a == 0)continue;
		if (a == 1 && i != j)
		{
			cout << "+x^" << n;
			continue;
		}
		if (a == 1 && i == j)
		{
			cout << "x^" << n;
			continue;
		}
		if (a == -1) 
		{
			cout << "-x^" << n;
			continue;
		}
		else if (i == 1 && a > 0)cout << '+' << a;
		else if (i == 1 && a < 0)cout << '-' << a;
		else cout << a;
				
		if (n != 0) 
		  cout << "x^" << n;
	} 
	return 0;
}
