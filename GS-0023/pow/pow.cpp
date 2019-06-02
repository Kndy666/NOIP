#include <iostream>

using namespace std;

int Pow(int a, int b)
{
  int ans = 1;
  int base = a;

  while (b)
  {
    if (b & 1)ans *= base;
    base *= base;
    b >>= 1;
  }
  return ans;
}

int main()
{
  int a, b;
  cin >> a >> b;

  cout << Pow(a, b) << endl;
  return 0;
}
