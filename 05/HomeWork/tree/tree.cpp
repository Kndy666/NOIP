#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  freopen("tree.out", "w", stdout);

  // Last Method

  int i, m, k; 
  char cde[7][7] = {'\0'};

  for (i = 1; i <= 4; i++) 
  {
 
    for (m = 1; m <= 4 - i; m++) 
    { 
      cde[i - 1][m - 1] = ' ';
    }

    for (k = 1; k <= 2 * i - 1; k++) 
    {
      cde[i - 1][m + k - 2] = '*';
    }

  }

  for (i = 1; i <= 3; i++) 
  { 

    for (m = 1; m <= i; m++) 
    {
      cde[i + 3][m - 1] = ' ';
    }

    for (k = 1; k <= 7 - 2 * i; k++)
    {
      cde[i + 3][m + k - 2] = '*';
    } 
    
  }

  for (int p = 0; p < 7; p++)
  {
    for (int q = 0; q < 7; q++)
    {
      if(cde[p][q] != '\0')
      {
	cout << cde[p][q];
      }
      
    }
    cout << endl;
  }
  return 0;
}
