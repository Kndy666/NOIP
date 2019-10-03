#include <iostream>

using namespace std;

int main()
{
	int num;
	cin >> num;
	
	int a[10][10] = {0};
	
	for (int i = 1; i <= num; i++)
	{
		for (int j = i; j <= num - i + 1; j++)
		{
			for (int k = i; k <= num - i + 1; k++)a[k][j] = i;
		 } 
	}
	
	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= num; j++)cout << a[i][j];
		cout << endl;
	}
}
