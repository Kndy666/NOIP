#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  freopen("tree.out", "w", stdout);
  
  int i, m, k; 

  for (i = 1; i <= 4; i++) 
  {
 
    for (m = 1; m <= 4 - i; m++) 
    { 
      cout << " ";
    }

    for (k = 1; k <= 2 * i - 1; k++) 
    {
      cout << "*";
    }

    cout << endl;

  }

  for (i = 1; i <= 3; i++) 
  { 

    for (m = 1; m <= i; m++) 
    {
      cout << " ";
    }

    for (k = 1; k <= 7 - 2 * i; k++)
    {
      cout << "*";
    } 

    cout << endl;
    
  }

  cout << endl;

  // Another Method

  char cde[7][7] = {

    {' ', ' ', ' ', '*', ' ', ' ', ' '},
    {' ', ' ', '*', '*', '*', ' ', ' '},
    {' ', '*', '*', '*', '*', '*', ' '},
    {'*', '*', '*', '*', '*', '*', '*'},
    {' ', '*', '*', '*', '*', '*', ' '},
    {' ', ' ', '*', '*', '*', ' ', ' '},
    {' ', ' ', ' ', '*', ' ', ' ', ' '}

  };

  for (int p = 0; p < 7; p++)
  {
    for (int q = 0; q < 7; q++)
    {
      cout << cde[p][q];
    }
    cout << endl;
  }

  return 0;
}
