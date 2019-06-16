#include <iostream>
#define LL long long

using namespace std;

LL SelNum(int n)
{
	if (n == 1)
		return 2;
	else if (n == 2)
		return 3;
	else
		return SelNum(n - 1) + SelNum(n - 2);
}

int main()
{
	int n;
	cin >> n;
	cout << SelNum(n) << endl;
	return 0;
 } 
