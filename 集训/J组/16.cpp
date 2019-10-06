#include <iostream>
#include <algorithm> 

using namespace std;

struct milk
{
	int price;
	int num;
}milks[5005];

bool cmp(milk a, milk b)
{
	return a.price < b.price;
}

int main()
{
	int need, n, money = 0;
	
	cin >> need >> n;
	
	for (int i = 0; i < n; i++)cin >> milks[i].price >> milks[i].num;
	sort(milks, milks + n, cmp); 
	
	for(int i = 0; need > 0; i++)
	{
		if (need >= milks[i].num)
		{
			need -= milks[i].num;
			money += milks[i].price * milks[i].num;
		}
		else
		{
			money += milks[i].price * need;
			need = 0;
		}
	}
	
	cout << money << endl;
}
