#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n == 1)
		cout << "no prime" << endl;
	else if (n == 2)
		cout << '2' << endl;
	else
	{
		for (int i = 2; i < sqrt(n); i++)
		{
			while (i != n)
			{
				if (n % i == 0)
				{
					cout << i << '*';
					n /= i;
				}
				else
				{
					break;
				}
			}	
		}
		cout << n;
	}
	return 0;
}
