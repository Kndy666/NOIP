#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  freopen("count.in", "r", stdin);
  freopen("count.out", "w", stdout);

  int num;
  cin >> num;
  
  int count = 0;

  int bag[200];

  for (int i = 0; i < num; i++)
  {
    cin >> bag[i];
  }

  for (int i = 0; i < num; i++)
  {
    for (int t = 0; t < num - 1; t++)
      {
	for (int j = 0; j < num - 2; j++)
	  {
	    if (bag[i] == bag[i + 1] + bag[i + 2]) count++;
	  }
      }
  }
  
  cout << count << endl;
  return 0;
}
