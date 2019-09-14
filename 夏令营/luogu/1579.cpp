#include <iostream>

using namespace std;

bool isprime(int num)
{
	if (num == 2)return true;
	for (int i = 2; i * i <= num; i++)
	{
		if (num % i == 0)return false;
	}
	return true;
}
int main()
{
	int num, num3;
	cin >> num;
	
	for (int i = 2; i <= num - 4; i++)
	{
		for (int j = 2; j <= num - 4; j++)
		{
			num3 = num - i - j;
			
			if (isprime(i) && isprime(j) && isprime(num3))
			{
				cout << i << ' ' << j << ' ' << num3 << endl;
				return 0;	
			}
		}
	}
}
