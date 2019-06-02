#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  freopen("array.in", "r", stdin);
  freopen("array.out", "w", stdout);

  int list1[5] = {};
  for(int i = 0; i < 5; i++)
  {
    cin >> list1[i];
  }

  for (int i = 0; i < 5; i++)
  {
    if (list1[i] == 3)
    {
      cout << i << endl;
    }
  } 
 return 0;
}
