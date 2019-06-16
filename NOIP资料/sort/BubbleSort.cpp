#include <iostream>

using namespace std;

int main()
{
	int n, a[101];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int tmp = 0;
	for (int i = 0; i < n - 1; i++)
	{
	    for (int m = 0; m < n - 1 - i; m++)
	    {
	        if (a[m] > a[m + 1])
	        { 
	            tmp = a[m]; 
	            a[m] = a[m+1]; 
	            a[m+1] = tmp; 
	        }	
	    }
	}
	
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << ' ';
	}
	
	return 0;
} 
