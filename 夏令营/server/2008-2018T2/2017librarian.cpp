#include <iostream>
#include <cmath>
#include <algorithm> 

using namespace std;

struct book
{
	int len, code;
}; 

int main()
{
	freopen("librarian.in", "r", stdin);
	freopen("librarian.out", "w", stdout);
	
	int n, q, bookList[1005], ans = 0, x;
	book list[1005];
	cin >> n >> q;
	for (int i = 0; i < n; i++)
	{
		cin >> bookList[i];
	}
	
	for (int i = 0; i < q; i++)
	{
		cin >> list[i].len >> list[i].code;
	}
	
	sort (bookList, bookList + n);
	
	for (int j = 0; j < q; j++)
	{
		ans = -1;
		for (int k = 0; k < n; k++)
		{
			x = pow(10, list[j].len);
			if ((bookList[k] % x)== list[j].code)
			{			
				ans = bookList[k];
				break;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
