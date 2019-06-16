#include <iostream>

using namespace std;

int main()
{
	for (int i = 0; i <= 20; i++)
	{
		for (int j = 0; j < 34; j++)
		{
			int z = 100 - i - j;
			if ((i * 5 + j * 3 + z / 3) == 100 && z % 3 == 0)
			{
				cout << i << ' ' << j << ' ' << z << endl;
			}
		}
	}
	return 0;
}
