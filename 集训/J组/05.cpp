#include <iostream>

using namespace std;

int main()
{
	int ans = 0;
	for (int i = 1; i < 10; i++)for (int j = 1; j < 20; j++)for (int k = 1; k < 50; k++)for (int n = 1; n < 100; n++)if (i * 10 + j * 5 + k * 2 + n == 100 && i + j + k + n == 40)ans++;
	cout << ans << endl;
}
