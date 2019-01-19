#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  freopen("factorial.in", "r", stdin);
  freopen("factorial.out", "w", stdout);

  int num;
  cin >> num;
  
  int sum = 1;
  for(int i = 1; i <= num; i++)
  {
    sum *= i;
  }
  
  cout << sum << endl;
  return 0;
}
