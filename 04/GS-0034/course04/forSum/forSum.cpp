#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  freopen("forSum.in", "r", stdin);
  freopen("forSum.out", "w", stdout);
  
  int max;
  cin >> max;
  
  int sum = 0;

  for(int i = 0; i <= max; i++)
  {
    sum += i;
  }
  cout << sum << endl;
  return 0;
}
