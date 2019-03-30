#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  freopen("in.in", "r", stdin);
  freopen("out.out", "w", stdout);

  int min, max, num, a, b, c, total;
  cin >> min >> max;
  num = min;
  for (int i = 0; i < max - min + 1; i++)
  {
    num++;
    a = num % 10;
    b = num / 10 % 10;
    c = num / 100 % 10;
    
    total = a * a * a + b * b * b + c * c * c;
    if (total == num)
    {
      cout << num << ' ';
    }
    
  }
  cout << endl;
  return 0;

}
