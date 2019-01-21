#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  freopen("matrix.in", "r", stdin);
  freopen("matrix.out", "w", stdout);

  int size;
  cin >> size;
  
  int matrix[9][9];
  
  for (int i = 1; i <= size; i++)
  {
    for (int m = 1; m <= size; m++)
    {
      matrix[i - 1][m - 1] = i + m;
    }
  }
  
  for (int i = 0; i < size; i++)
  {
    for (int m = 0; m < size; m++)
    {
      cout << matrix[i][m] << " ";
    }
    cout << endl;
  }

  return 0;
}

