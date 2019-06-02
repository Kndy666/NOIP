#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int n, ans = 0, last = 0;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    ans += n * pow(10, i) + last;
    last = n * pow(10, i) + last;
  }
  
  cout << ans << endl;
  return 0;
}

