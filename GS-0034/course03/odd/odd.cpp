#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  freopen("odd.in", "r", stdin);
  freopen("odd.out", "w", stdout);
  
  int a;
  cin >> a;
  
  if(a % 2)
  {
    cout << "odd" << endl;
  }
  else
  {
    cout << "even" << endl;
  }
  return 0;
}
