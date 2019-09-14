#include <iostream>

using namespace std;

int main()
{
  string isbn;
  getline(cin, isbn);

  int size = isbn.size();
  int num = 1, res = 0;

  for (int i = 0; i < size - 2; i++)
  {
    if (isbn[i] != '-')
    {
      res += (isbn[i] - '0') * num;
      num++;
    }
  }
  
  res %= 11;

  char lastNum = isbn[size - 1];
  char resChar;
  if (res == 10)
  {
   resChar = 'X';
  }
  else
  {
   resChar = res + '0';
  }

  if (resChar == lastNum)
  {
    cout << "Right" << endl;
  }
  else
  {
    isbn[size - 1] = resChar;
    cout << isbn << endl;
  }
  return 0;
  
}
