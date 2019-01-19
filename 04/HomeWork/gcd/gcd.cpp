#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  freopen("gcd.in", "r", stdin);
  freopen("gcd.out", "w", stdout);

  int a, b, tmp;
  cin >> a >> b;

  if(a < b)
  {
    tmp = a;
    a = b;
    b = tmp;
  }
  
  int lcm = a * b;

  do
  {
    tmp= a % b;
    a = b;
    b = tmp;
  }while(tmp != 0);
  
  lcm /= a;

  cout << a << " " << lcm << endl;
  return 0;
}
