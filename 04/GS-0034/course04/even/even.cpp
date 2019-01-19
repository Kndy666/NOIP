#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  freopen("even.in", "r", stdin);
  freopen("even.out", "w", stdout);
  
  int max;
  cin >> max;

  for(int i = 0; i <= max; i += 2)
  {
    if(i % 10 == 0)
    {
      cout << endl;
    }
    cout << i << " ";
  }
  cout << endl;
  return 0;
}




























