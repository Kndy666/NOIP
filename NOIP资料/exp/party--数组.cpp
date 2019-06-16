#include <iostream>

using namespace std;

int main()
{
	int m, n, mArray[1005], lArray[1005], k;
	cin >> m >> n >> k;
	for (int i = 1; i <= m; i++)
	{
		mArray[i] = i;
	}
	
	for (int j = 1; j<= n; j++)
	{
		lArray[j] = j;
	}
	
	int t1 = m, t2 = n, man = 0, lady = 0;
	
	for (int l = 0; l < k; l++)
	{
		man++;
		lady++;
		cout << mArray[man] << ' ' << lArray[lady] << endl;
		// Ä£ÄâÅÅ¶Ó 
		t1++; 
		mArray[t1] = mArray[man];
		t2++;
		lArray[t2] = lArray[lady];
	}
	
	return 0;
}
