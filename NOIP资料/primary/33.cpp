#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>

using namespace std;

struct Num
{
	int count;
	int num;	
};

bool Cmp(Num a, Num b)
{
	if(a.count == b.count)
		return a.num < b.num;
	else
		return a.count > b.count;
}

int main()
{
	int n, list[1005], tmpList[10005];
	vector<Num> vecList;
	cin >> n;
	memset (tmpList, 0, sizeof(tmpList));
	for (int i = 0; i < n; i++)
	{
		cin >> list[i];
		tmpList[list[i]]++;
	}
	
	for (int j = 0; j < 10005; j++)
	{
		if (tmpList[j] > 0)
		{
			Num tmp;
			tmp.count = tmpList[j];
			tmp.num = j;
			vecList.push_back(tmp);
		}
	}
	
	sort(vecList.begin(), vecList.end(), Cmp);
	cout << vecList[0].num << endl;
	return 0;
}
