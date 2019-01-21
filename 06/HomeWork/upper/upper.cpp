#include <iostream>

using namespace std;

int main()
{
  char ch, upperCh;
  cin >> ch;
  
  if(ch >= 'a' && ch <= 'z')
  {
    upperCh = ch - 32;
  }
  cout << upperCh << endl;

  return 0;
}
