#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  freopen("forSum.out", "w", stdout);

  int sum = 0;

  for(int i = 0; i <= 2000; i++)
  {
    sum += i;
  }
  cout << sum << endl;
  return 0;
}
