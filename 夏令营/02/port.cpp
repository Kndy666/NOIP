#include <iostream>
#include <vector>
#include <queue> 

using namespace std;

int b[100005] = {0};

struct boat
{
	int time;
	int person;
	vector<int> country;
}a[100005]; 

vector<int> check(vector<int> c)
{
	vector<int> tmp; 
	for (int j = 1; j <= c.size(); j++)
	{
		b[c[j]] = 1;
	}
	
	for (int j = 1; j <= c.size(); j++)
	{
		if (b[j] != 0)tmp.push_back(j);
	}
	return tmp;
}


int main()
{
	int n, cc = 0;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> a[i].time;
		cin >> a[i].person;
		for (int j = 0; j < a[i].person; j++)
		{
			int tmp;
			cin >> tmp; 
			a[i].country.push_back(tmp); 	
		}
	}
	
	/*for (int i = 0; i < n; i++)
	{
		vector<int> tmp;
		a[i].country = check(a[i].country);	
	}*/
	
	for (int i = 0; i < n; i++)cout << a[i].country.size() << endl;
}
