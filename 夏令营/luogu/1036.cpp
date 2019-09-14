#include <iostream>

using namespace std;

int ans = 0, sum = 0;

bool isprime(int num)
{
	if (num == 2)return true;
	for (int i = 2; i * i <= num; i++)
	{
		if (num % i == 0)return false;
	}
	return true;
}

void Perm(int list[], int k, int m)
{
	//k表示前缀的位置,m是要排列的数目.
	if(k == m - 1)
	{ 
		//前缀是最后一个位置,此时打印排列数.
		for(int i = 0; i < m; i++)
		{
			cout << list[i] << ' '; 
			sum += list[i];
		}
		cout << endl;
		if (isprime(sum))
		{
			ans++;	
		}
		sum = 0;
		
	}
	else
	{
		for(int i = k; i < m; i++)
		{
			swap(list[k], list[i]);//交换前缀,使之产生下一个前缀.
			Perm(list, k + 1, m);
			swap(list[k], list[i]);//将前缀换回来,继续做上一个的前缀排列.
		}
	}
}

int main()
{
	int n, k, arr[25];
	cin >> n >> k;

	for (int i = 0; i < n; i++)cin >> arr[i];

	Perm(arr, 0, k);
	
	//cout << ans << endl;
}
