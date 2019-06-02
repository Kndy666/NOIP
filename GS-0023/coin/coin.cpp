#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  freopen("coin.in", "r", stdin);
  freopen("coin.out", "w", stdout);
  
  int days;
  int j = 1;
  int n = 0;
  cin >> days;

  int coin = 0;

  for (int i = 1; i <= days; i++)
  {
    for (int t = 0; t < i; t++)
    {
      n++;
      coin += j;
    }
    if(n == days) break; 
    j++;
  }

  cout << coin << endl;
  return 0;
}
