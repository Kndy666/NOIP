#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>

using namespace std;

bool Cmp(int a, int b)
{
  return a < b;
}

int main()
{
  freopen("pencil.in", "r", stdin);
  freopen("pencil.out", "w", stdout);

  int penNum = 0, kinds[3][2] = {0};
    
  cin >> penNum;
    
  for (int i = 0; i < 3; i++)
  {
      for (int j = 0; j < 2; j++)
      {
          cin >> kinds[i][j];
      }
  }
    
  //Method 1
  int money[3];
  money[0] = ceil(1.0 * penNum / kinds[0][0]) * kinds[0][1];
  //Method 2
  money[1] = ceil(1.0 * penNum / kinds[1][0]) * kinds[1][1];
  //Method 3
  money[2] = ceil(1.0 * penNum / kinds[2][0]) * kinds[2][1];
    
  sort(money, money + 3, Cmp);
   
  cout << money[0] << endl;
    
  return 0;
}
