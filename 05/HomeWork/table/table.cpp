#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  freopen("table.out", "w", stdout);
  
  for (int i = 1; i <= 9; i++)
  {
    for(int m = 1; m <= i; m++)
    {
      cout << i << " x " << m << " = " << i * m << " ";
    }
    cout << endl;
  }
  return 0;
}
