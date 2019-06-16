#include <iostream>

using namespace std;

int main()
{
	int a[100] = {8, 3, 2, 9, 5};
	int tmp = 0, n = 5;
	for (int i = 1; i < n; i++)
	{
	    int tmp = a[i];
	    int j = i;
	    while(j > 0 && tmp < a[j - 1])
		{
	        a[j] = a[j - 1];
	        j--;
	    }
	    a[j] = tmp; 
	}
	    
    for (int k = 0; k < n; k++)
    {
    	cout << a[k] << ' ';
	}
	cout << endl;

	return 0;
} 





