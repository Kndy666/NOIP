#include <iostream>

using namespace std;

int main()
{

  /* 7x + 4y = 100
  x = 15为极值
  y = 25为极值
   */

  for (int x = 0; x <= 15; x++)
  {
    for (int y = 0; y <= 25; y++)
    {
      if (7 * x + 4 * y == 100)cout << x << ' ' << y << ' ' << 100 - x - y << endl;
    }
  }

  return 0;
}
