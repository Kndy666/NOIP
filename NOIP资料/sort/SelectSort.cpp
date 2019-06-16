#include <iostream>

using namespace std;

int main()
{
	int a[100] = {8, 3, 2, 9, 5};
	int tmp = 0, n = 5;
	for (int i = 0; i < n - 1; i++)
	{
	    int min = i;
	    for (int m = i + 1; m < n; m++)
	    {
	        if (a[m] < a[min])
	        { 
	            min = m;
	        }
			cout << min << ' ';	
	    }
	    if (min != i)
	    {
	        tmp = a[min];
	        a[min] = a[i];
	        a[i] = tmp;
	    }
	    
	    for (int k = 0; k < n; k++)
	    {
	    	cout << a[k] << ' ';
		}
		cout << endl;
	}
	return 0;
} 



