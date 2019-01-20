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
      cout << m << "*" << i << "=" << i * m << " ";
      if(i > 2 && i < 5 && m == 2)
      {
	cout << " ";
      }
    }
    cout << endl;
  }
  return 0;
}
