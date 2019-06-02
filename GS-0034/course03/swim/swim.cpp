#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  freopen("swim.in", "r", stdin);
  freopen("swim.out", "w", stdout);
  
  int a, b, c, d;
  
  cin >> a >> b >> c >> d;
  
  int time = c * 60 + d - (a * 60 + b);
  
  cout << time / 60 << " " << time % 60 << endl;
  return 0;
}
