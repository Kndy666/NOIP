#include <iostream>

using namespace std;

int _array[101], _n;

void QuickSort(int left, int right) 
{
	int i, j, t, tmp;
	if(left <= right)
	{
	    tmp = _array[left]; 
	    i = left;
	    j = right;
	    while(i != j) 
		{ 
	    	while(_array[j] >= tmp && i < j)
	    	{
	    		j--;
			}
	    		
	    	while(_array[i] <= tmp && i < j)
	    	{
	    		i++;
			}
			     
	    	if(i < j)
	    	{
	    		t = _array[i];
	    		_array[i] = _array[j];
	    		_array[j] = t;
	    	}
	    }
	    _array[left] = _array[i];
	    _array[i] = tmp;
	    QuickSort(left, i - 1);
	    QuickSort(i + 1, right);
    }
}
int main() {
	cin >> _n;
	for (int i = 0; i < _n; i++)
	{
		cin >> _array[i];
	}
	
    QuickSort(0, _n - 1); 

    for (int i = 0; i < _n; i++)
	{
		cout << _array[i] << ' ';
	}
    return 0;
}

