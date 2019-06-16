#include <iostream>

using namespace std;

void MergeArray(int array[], int l, int m, int r)
{
    int i = l, j = m + 1, k = 0, tmp[6];
    
	cout << "mergeArray" << l << ' ' << m << ' ' << r << endl; 
    while((i <= m)&&(j <= r))
    {
        if(array[i] < array[j])
        {
            tmp[k++] = array[i++];
        }
        else
        {
            tmp[k++] = array[j++];
        }
    }
    
    while(i <= m)
    {
        tmp[k++] = array[i++];
    }
    
    while(j <= r)
    {
        tmp[k++] = array[j++];
    }

    for(i = l, k = 0; i <= r; i++, k++)
    {
        array[i] = tmp[k];
    }
}

void MergeSort(int array[], int l, int r)
{
	cout << "mergeSort" << l << ' ' << r << endl; 
    if(l < r)
	{
	    int m = (l + r) / 2;
	    MergeSort(array, l, m);
	    MergeSort(array, m + 1, r);
	    MergeArray(array, l, m, r);
    }
}

int main()
{
    int list[6] = {2, 5, 3, 7, 6, 1};
    
    MergeSort(list, 0, 5);
    
    for (int i = 0; i < 6; i++)
    {
    	cout << list[i] << ' ';
	}
	cout << endl;
    return 0;
}
