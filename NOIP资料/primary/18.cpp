#include <iostream>
#define LL long long

using namespace std;

LL Fibo(int n)
{
	if (n < 3)
	{
		return 1;
	}
	else
	{
		return Fibo(n - 1) + Fibo(n - 2);
	}
}


int main()
{
	int n;
	cin >> n;
	cout << Fibo(n) << endl;
	return 0;	
}
