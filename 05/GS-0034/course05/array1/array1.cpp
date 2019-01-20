#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  freopen("array1.in", "r", stdin);
  freopen("array1.out", "w", stdout);
  
  int numList[200][200];
  int row, col;
  
  cin >> row >> col;

  for (int i = 0; i < row; i++)
  {
    for (int m = 0; m < col; m++)
    {
      cin >> numList[i][m];
    }
  }
 
  for (int i = 0; i < row; i++)
  {
    for (int m = 0; m < col; m++)
    {
      cout << numList[i][m];
    }
    cout << endl;
  }
  return 0;
}
