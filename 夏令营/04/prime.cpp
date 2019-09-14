#include <iostream>

using namespace std;

int main()
{
	int num;
	cin >> num;
	
	for (int i = num - 1; i >= 2; i--)
	if (num % i == 0)
	{
		cout << i << endl;
		return 0;
	}
	
	return 0;
}
