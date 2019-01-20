#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  freopen("reverse.in", "r", stdin);
  freopen("reverse.out", "w", stdout);

  int num, res = 0;
  cin >> num;
  
  while(num > 0)
  {
    res = res * 10 + num % 10;
    num /= 10;
    cout << res % 10;
  }
  cout << endl;
}
