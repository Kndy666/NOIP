#include <iostream>

using namespace std;

int main()
{
	int list[12] = {2, 5, 3, 7, 6, 1, 4, 11, 8, 10, 9, 12};	
	int sortList[12] = {0}, countList[20] = {0};
	
	for (int i = 0; i < 12; i++)
    {
    	int val = list[i];
    	countList[val]++;
	}
	
	for (int j = 1; j < 20; j++)
	{
		countList[j] += countList[j - 1];
	}
	
	for (int m = 0; m < 12; m++)
	{
		int value = list[m];
        int position = countList[value] - 1;
        sortList[position] = value;
        countList[value] -= 1;
	}
    
    for (int n = 0; n < 12; n++)
    {
    	cout << sortList[n] << ' ';
	}
	cout << endl;
	return 0;
} 
