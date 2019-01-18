#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  freopen("leap.in", "r", stdin);
  freopen("leap.out", "w", stdout);

  int a;
  cin >> a;

  if(a % 4 == 0 && a % 100 != 0)
  {
    cout << "is leap" << endl;
  }
  else if(a % 400 == 0)
  {
    cout << "is leap" << endl;
  }
  else
  {
    cout << "no leap" << endl;
  }
 
  return 0;
}
