#include <iostream>

using namespace std;

int main()
{
	int num;
	cin >> num;
	int a[10][10] = {0};
	int i = 1; 
	while(i <= num)
	{
		for (int j = i; j <= num - i + 1; j++)
		{
			for (int k = i; k <= num - i + 1; k++)
			{
				a[k][j] = i;	
			}	
		} 
		i++;
	} 
	
	for (int j = 1; j <= num; j++)
	{
		for (int k = 1; k <= num; k++)cout << a[j][k];
		cout << endl;
	}
	return 0;
} 
