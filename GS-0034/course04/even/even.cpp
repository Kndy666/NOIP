#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  freopen("even.out", "w", stdout);
  
  for(int i = 0; i <= 100; i += 2)
  {
    if(i % 10 == 0)
    {
      cout << endl;
    }
    cout << i << " ";
  }
  cout << endl;
  return 0;
}




























