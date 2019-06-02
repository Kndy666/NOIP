#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  freopen("score.in", "r", stdin);
  freopen("score.out", "w", stdout);

  int a, b, c;
  cin >> a >> b >> c;

  if(a > 0 || a < 100 || b > 0 || b < 100 || a % 10 != 0 || b % 10 != 0 || c % 10 != 0 || c > 0 || c < 100)
  {
    cout << "wrong" << endl;
    return 1;
  }
  int score = a * 0.2 + b * 0.3 + c* 0.5;
  cout << score << endl;
  return 0;
}
