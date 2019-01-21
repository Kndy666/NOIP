#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
  freopen("isbn.in", "r", stdin);
  freopen("isbn.out", "w", stdout);
  
  string isbn, temp;
  getline(cin, isbn);
  
  char read = isbn[isbn.size() - 1];

  int res = 0;

  for (int i = 0; i < isbn.size() - 2; i++)
  {
    if (isbn[i] != '-')
    {
      temp += isbn[i];
    }
  }
  
  for (int i = 0; i < temp.size(); i++)
  {
    res += (temp[i] - '0') * (i + 1);
  }

  res %= 11;
  char resChar;

  if (res == 0)
  {
    resChar = 'X';
  } 
  else
  {
    resChar = res + '0';
  }

  if (resChar == read)
  {
    cout << "Right" << endl;
  }
  else
  {
    isbn[isbn.size() - 1] = resChar;
    cout << isbn << endl;
  }

  return 0;
}
