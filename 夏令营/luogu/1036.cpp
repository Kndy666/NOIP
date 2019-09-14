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
	//k��ʾǰ׺��λ��,m��Ҫ���е���Ŀ.
	if(k == m - 1)
	{ 
		//ǰ׺�����һ��λ��,��ʱ��ӡ������.
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
			swap(list[k], list[i]);//����ǰ׺,ʹ֮������һ��ǰ׺.
			Perm(list, k + 1, m);
			swap(list[k], list[i]);//��ǰ׺������,��������һ����ǰ׺����.
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
